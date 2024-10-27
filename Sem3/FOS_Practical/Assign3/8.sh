echo "Enter file name: "
read fname

if [ -e "$fname" ]
then
echo "File exists"
    if sort -c $fname;
    then
        echo "The file is sorted in ascending order."
    else
        echo "The file is not sorted:"
	echo ""
        sort -nr $fname
    fi
else
    echo "File does not exist."
fi

