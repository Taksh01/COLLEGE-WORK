echo "Enter folder name:"
read folder

mkdir 11uncompress

cp $folder/* 11uncompress


for file in 11uncompress/*;
do
gunzip $file
done

echo "Successfully uncompressed all file "
