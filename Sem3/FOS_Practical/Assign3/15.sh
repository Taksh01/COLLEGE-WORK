echo "Replace all the word from unix to linux"
sed 's/unix/linux/g' 15data.txt
echo ""

echo "Replace only 3rd occurance unix to linux"
sed 's/unix/linux/3' 15data.txt
echo ""

echo "Replace a string in 2nd line only from Unix to Linux"
sed '2s/unix/linux/' 15data.txt
echo ""

echo "Delete a pertuculer line (5th )line from file"
sed "5d" 15data.txt
echo ""

echo "Delete a pertuculer line (2nd )line from file"
sed "2d" 15data.txt
echo ""


