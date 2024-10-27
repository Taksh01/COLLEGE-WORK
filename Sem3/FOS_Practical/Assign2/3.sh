echo "enter no:"
read no
sum=0
while [ $no -gt 0 ]
do
rem=`expr $no % 10`
sum=`expr $sum \* 10 + $rem`
no=`expr $no / 10`
done
echo "$sum"

