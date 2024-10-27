echo "enter basic salary:"
read  basic




DA=$(( basic * 60/100 ))
HRA=$(( basic * 20/100 ))
MA=100
IT=$(( basic * 15/100 ))

GS=$(( DA + HRA + MA +IT ))

echo "DA is $DA"
echo "HRA is $HRA"
echo "MA is $MA"
echo "IT is $IT"
echo "Gross Salary is $GS"
