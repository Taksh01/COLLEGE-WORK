no=1
until [ $no -gt 100 ]
do
if [ `expr $no % 2` -ne 0 ]
then
echo "$no"
fi
no=`expr $no + 1`
done

