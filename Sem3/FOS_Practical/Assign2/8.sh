for i in $(seq 1 100)
do
result=`expr $i % 2`
if [ $result -ne 0 ]
then
continue
else
echo "$i"
fi
done

