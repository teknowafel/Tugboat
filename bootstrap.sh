echo "Tugboat has been initialized, scheduling jobs"
crontab /config
cron -f &
echo "Jobs have been scheduled, you are now viewing the log"
tail -f /var/log/tugboat