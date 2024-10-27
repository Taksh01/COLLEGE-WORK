echo "enter no:"
read no

count=0

for i in $(seq 1 $no)
do
result=`expr $no % $i`
if [ $result -eq 0 ]
then
count=`expr $count + 1`
fi
done
if [ $count -eq 2 ]
then
echo "Prime No"
else
echo "Not prime no"
fi


