cat 3data.txt
echo ""

echo "display the student who get highest marks"
sort -k 4 -nr 3data.txt|head -n 1
echo ""

echo "display the student who get lowest marrks"
sort -k 4 -nr 3data.txt|tail -n 1
echo ""

cat 1data.txt
echo ""
echo ""

echo "display the emp who get highest salary"
sort -t "|" -k 4 -nr 1data.txt|head -n 1
echo ""


echo "display the emp who get lowest salary"
sort -t "|"  -k 4 -nr 1data.txt|tail -n 1
echo ""


