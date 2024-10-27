echo "creating file1:"
cat > f1.txt

echo "creating file2:"
cat > f2.txt

echo "FILE1"
cat f1.txt
echo "FILE2"
cat f2.txt
echo ""
echo "comparing files:"
comm f1.txt f2.txt
echo ""

echo "difference  files:"
diff f1.txt f2.txt
echo "other method"
comm -3 f1.txt f2.txt
echo ""

echo "common between 2 files:"
comm -12 f1.txt f2.txt
