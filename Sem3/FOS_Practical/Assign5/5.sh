echo "a shell script to display jobs with process ids"

#obs command only displays background jobs in the current shell session.
echo "using jobs:"
jobs -p

#lists all processes with their PIDs
echo "using ps"
ps -e
