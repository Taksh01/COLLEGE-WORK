echo "file creation"
cat > First_Shell.txt
cat First_Shell.txt

file=First_Shell.txt

if [ -r $file ]
then
echo "readable"
else
echo "not readable"
fi

if [ -w $file ]
then
echo "writable"
else
echo "not writeable"
fi

chmod a-x "$file"

if [ -x $file ]
then
echo "executable"
else
echo "not executable"
chmod a+x "$file"
fi

ls -l
