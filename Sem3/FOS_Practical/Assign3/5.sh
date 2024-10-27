echo "enter file name: "
read fname

if [ -e "$fname" ]
then
echo "exist"

echo "Display content in sorted order as per name"
sort -k 2 $fname

echo "Display first five lines from the file"
head -n 5 $fname

echo "Display last five lines from the file"
tail -n 5 $fname

echo "\n"
echo "paste two files sequencially with “|” delimeters"
echo "\n"
paste -s -d'|' $fname 4data.txt


else
echo "not there"
fi
