echo "Enter folder name:"
read folder

mkdir 10compress

cp $folder/* 10compress



gzip -r 10compress



