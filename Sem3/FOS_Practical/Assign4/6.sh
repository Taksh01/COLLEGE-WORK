echo "enter file 1: "
read f1
echo ""

echo "enter file 2: "
read f2
echo ""

gzip $f1
gzip $f2

echo "Both file have been compressed"

