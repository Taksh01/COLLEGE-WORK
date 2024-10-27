echo "Enter file name: "
read fname

if [ -e "$fname" ]
then
    echo "File exists"

    echo "Displaying file content:"
    cat $fname
else
    echo "File does not exist"
fi
