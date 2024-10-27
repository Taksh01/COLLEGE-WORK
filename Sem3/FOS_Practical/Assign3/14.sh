echo "shellscript using awk command to display that prints the first field and string of 10 characters if not then space used then a space and display third field and then a second record in new line."

awk '{printf "%10s %s \n", $1, $3}' 14data.txt >> 14data.txt
