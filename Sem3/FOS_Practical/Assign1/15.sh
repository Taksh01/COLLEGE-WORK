echo "enter file:"
read file

total=$(wc -w < "$file")

if [ $total -gt 20 ]
then
echo "enough"
else
echo "notenough"
fi


echo "$total"
