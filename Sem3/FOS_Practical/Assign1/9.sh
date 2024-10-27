echo "long listing of the file f1 "
ls -l
echo ""

echo "number of lines, characters of the file f1"
echo "lines:"
wc -l f1.txt

echo "characters:"
wc -c f1.txt

echo "all the hidden files in current directory"
ls -a | grep "^\."

