echo "enter no"
read  no

sum=1
for i in $(seq 1 $no)
do
sum=`expr $sum \* $i`
done

echo "$sum"
