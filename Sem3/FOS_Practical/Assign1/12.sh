echo "enter no1 and no2"
read a
read b

echo "1:add 2:sub 3:multi 4:div 5:modulo"
read op

case $op in
1) total=`expr $a + $b`
echo "$total"
;;

2)
total=`expr $a - $b`
echo "$total"
;;

3)
total=`expr $a \* $b`
echo "$total"
;;
esac

