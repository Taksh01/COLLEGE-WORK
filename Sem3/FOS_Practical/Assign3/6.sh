echo "enter file name: "
read fname

if [ -e "$fname" ]
then
echo "exist"

echo "Display content in Upper Case"
cat $fname | tr [:lower:] [:upper:]

else
echo "not there"
fi
