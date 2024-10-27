echo "enter no:"
read a
read b
read c

if [ $a -gt $b -a $a -gt $c ]
then
echo "a is greater"
fi

if [ $b -gt $a -a $b -gt $c ]
then
echo "b is greater"
fi

if [ $c -gt $a -a $c -gt $b ]
then
echo "c is greater"
fi
