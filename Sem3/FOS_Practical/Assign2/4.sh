hour=$(date +%H)

if [ $hour -lt 12 ]
then
echo "GM"
elif [ $hour -gt 12 -a $hour -lt 18 ]
then
echo "GA"
else
echo "GN"
fi
