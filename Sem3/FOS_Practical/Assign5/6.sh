echo "shell script to display the jobs which have stopped:"

echo "job -s ; might not work"
jobs -s
echo ""

echo "jobs with grep use:"
jobs | grep "Stopped"

