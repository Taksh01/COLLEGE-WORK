cnt=1
for i  in 1 2 3 4
do
for j in $(seq 1 $i)
do
echo -n  "$cnt"
cnt=`expr $cnt + 1`
done
echo ""
done

