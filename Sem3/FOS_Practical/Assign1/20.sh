echo "enter file"
read file

count=$(wc -l < "$file" )

if [ $count -gt 10 ]
then
echo "enough lines"
else
echo "not enough"
fi
