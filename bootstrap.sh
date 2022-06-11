echo "Tugboat has been initialized, scheduling jobs"
mcron /config &
echo "Jobs have been scheduled, you are now viewing the log"
tail -f /var/log/tugboat