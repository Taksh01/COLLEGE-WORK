echo "enter cel:"
read cel
read cube
far=`expr $cel \* 9 / 5 + 32`
echo "$far"
total=`expr $cube \* $cube \* $cube`
echo "$total"
