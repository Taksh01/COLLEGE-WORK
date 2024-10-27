awk 'NR>1' 12data.txt | while read line
do
  col3=$(echo $line | awk '{print $3}')
	if  [ $col3 -gt 15 ]
	then
	sed -i "s|$line|$line *|" 12data.txt
	fi
done


