echo "a. display emp and student file horizontally"
paste 1data.txt 3data.txt
echo ""

echo "display emp and student file sequence wise with tab delimeter:"
paste -s -d'\t' 1data.txt 3data.txt
echo ""

echo ". join emp and student file and display result."
join -t '|' -1 3 -2 3 <(sort -t '|' -k3 1data.txt) <(sort -t '|' -k3 1edata.txt)

echo "sort marks in reverse order"
cut -d" " -f 4 3data.txt|sort -nr
echo ""

echo "sort entire data in marks reverse order"
sort -k4 -nr 3data.txt
echo ""

