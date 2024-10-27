echo "a file that has not been accessed since one year"
echo ""
echo "enter file name:"
read f1

name=$(find $f1 -atime +365)


if [ "$name" = "$f1" ];
then
echo "$f1 is has not been accessed since one year"
else
echo "$f1 is accessed within year"
fi

