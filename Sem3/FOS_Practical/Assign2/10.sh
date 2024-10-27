echo "enter no"
read no

count=0
sum=0
while [ $no -gt 0 ]
do
rem=`expr $no % 10`
count=`expr $count + 1`
sum=`expr $sum + $rem`
no=`expr $no / 10`
done
echo "$count"
echo "$sum"

