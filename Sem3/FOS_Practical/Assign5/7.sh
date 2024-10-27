while true;
do
echo "1. display dynamic real time view of running system"
echo "2. display full format list of processes"
echo "3. display your hostname on terminal"
echo "4. display routing table"
echo "5.Exit"
echo "enter choice: "
read choice

case $choice in

1) echo "displaying dynamic real time view of running system"
	top
	;;

2) echo "display full format list of processes"
	ps -f
	;;

3) echo "displaying your hostname on terminal"
	hostname
	;;

4) echo "displaying routing table"
	route -n #not working
	ip route
	;;

5) echo "exiting.."
	exit 0
	;;

*) echo "Invalid Choice"
	;;
esac
echo ""
done
