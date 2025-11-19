#!/bin/bash

# Directory where logs will be stored (inside your home folder)
LOG_DIR="$HOME/system_logs"
mkdir -p "$LOG_DIR"

# Log file with timestamp
LOG_FILE="$LOG_DIR/system_info_$(date +%F_%H-%M-%S).log"

# Write system info to the log file
{
  echo "======================================"
  echo " System Info Log - $(date)"
  echo " User: $(whoami)"
  echo "======================================"
  echo ""
  echo "------ Running Processes ------"
  ps -eo pid,comm,%mem,%cpu --sort=-%cpu | head -15
  echo ""
  echo "------ Disk Usage ------"
  df -h
  echo ""
  echo "------ Memory Usage ------"
  free -h
} > "$LOG_FILE"

# Keep logs for the last 7 days only
find "$LOG_DIR" -type f -name "*.log" -mtime +7 -exec rm {} \;

echo "✅ System information logged to: $LOG_FILE"
