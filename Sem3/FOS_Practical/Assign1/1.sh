echo "Displaying the hidden files:"
ls -a | grep "^\."


echo "Making directories to delete it:"
mkdir delete
cd delete
touch file1.txt
touch file2.txt
echo "successfully created"
cd -
echo "successfully moved back"
rm -r delete
echo "successfully deleted"


echo "Two functionality of mv command"
touch file.txt
echo "moving file"
mv file.txt /mnt/c/Users/PART/Desktop/fos_final_prcts
echo "succcesfuly moved"
echo "moving to location of file"
cd /mnt/c/Users/PART/Desktop/fos_final_prcts
echo "succesfully moved"
echo "renaiming file"
mv file.txt moved.txt
echo "successfully renamed"
