echo "enter no:"
read n

for i in $(seq 1 10)
do
echo "$n * " $i "=" `expr $n \* $i`
done
