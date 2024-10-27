echo "enter filename:"
read folder

tar -czvf "$folder.tar.gz" .

echo "compressed all directory and sub directory succesfully"
