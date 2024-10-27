touch dummy_file1 dummy_file2 dummy_file3

echo "Display file informaton of dummy files"
ls -l dummy_file*
echo "OR"
df -a

echo "Display sizes in Human Readable Format"
df -h
echo ""

echo "Display information in KB"
df -k
echo ""

echo "Display information in MB"
df -m
echo ""

echo "Display information in GB"
df -B G
echo "OR"
df -h --block-size=G

echo "To check the file system type"
df -T
echo ""

echo "To see the information of only device /home file system in human readable format"
df -hT /home
echo ""
