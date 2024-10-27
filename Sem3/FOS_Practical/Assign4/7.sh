echo "enter file 1: "
read f1
echo ""

echo "enter file 2:"
read f2
echo ""

gunzip $f1
gunzip $f2

echo "both files have been uncompressed"
