
touch File_list.txt
ls -l > File_list.txt
echo ""
ls -l File_list.txt
echo ""
chmod a+x File_list.txt
ls -l File_list.txt
echo ""
if [ -r File_list.txt ]
then
echo "readable"
else
echo "not reable"
fi

if [ -w File_list.txt ]
then
echo "wrieteable"
else
echo "not writeable"
fi


if [ -x File_list.txt ]
then
echo "executable"
else
echo "not executable"
fi
