while true; do
echo "1. display trobule shooting detail of network"
echo "2. kill the process"
echo "3.view all mounts"
echo "4. display full format listing"
echo "5.exit"
echo ""
echo "enter choice: "
read choice

case $choice in
1) echo "displaying trobule shooting detail of network:"
	ifconfig -a #not working
	ip addr # alternate command
	;;

2) echo "killing process: "
	ps
	echo ""
	echo "Now enter pid:"
	read pid
	kill $pid
	;;

3) echo "view all mounts:"
	mount
	;;

4)echo "displaying full format listing:"
	ps -f
	;;
5) echo "exiting"
	exit 0
	;;

esac
echo ""
done

