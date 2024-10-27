echo "a. display first 3 lines from emp file"
head -n 3 1data.txt
echo ""

echo "b. display last 3 lines from emp file"
tail -n 4 1data.txt
echo ""

echo "c. display emp file in sorted order"
sort -n 1data.txt
echo ""

echo "d. display eno and city from emp file"
cut -d'|' -f1,3 1data.txt
