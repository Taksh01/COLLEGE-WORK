echo "Diplay all the Records starting with 'P' character"
awk '$2 ~ /^P/' 13data.txt


echo "Count all records having quantity =25"
awk '$3 == 25' 13data.txt | wc -l


echo "Display the record with maximum price"
sort -t " " -k4 -r 13data.txt | head -n 2|tail -n 1
