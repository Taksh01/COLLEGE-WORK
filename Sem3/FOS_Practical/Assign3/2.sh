echo "display eno,ename and city from emp file by awk"
awk -F'|' '{print $1 "|" $2 "|" $3}' 1data.txt
echo ""

echo "echo display eno,ename and city from emp file by cut"
cut -d'|' -f 1,2,3 1data.txt
echo ""

echo " display ename like only 2 character should display in one line"
cut -d'|' -f 2 1data.txt | cut -c 1-2
echo ""

echo "display ename in capital latters from emp file"
cut -d'|' -f 2 1data.txt | tr '[:lower:]' '[:upper:]'
echo ""

echo "display emp file with tab delimeters."
tr '|' '\t' < 1data.txt
echo ""

