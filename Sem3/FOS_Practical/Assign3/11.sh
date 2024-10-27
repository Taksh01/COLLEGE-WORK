
cat 11data.txt
echo ""


echo "Cut the 2 -4 characters from all cities"
cut -c 2-4 11data.txt

echo "Sort all city names"
sort 11data.txt
echo ""

echo "Display first five cities:"
head -n 5 11data.txt

echo "Display last five cities"
tail -n 5 11data.txt
