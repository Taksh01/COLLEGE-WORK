echo " cut city from student file and store it in new file"
cut -d ' ' -f 3 3data.txt > 4data.txt



echo "cut rno and marks from student file and store it in marks file"
cut -d ' ' -f 1,4 3data.txt > 4marksdata.txt


echo "display the student who get highest marks"
cut -d ' ' -f 1,2,3,4 3data.txt | sort -k4 -nr | head -n 1


echo "display only numbers from student file"
cut -d ' ' -f 1,4 3data.txt

