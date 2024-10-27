while true;
do
echo "1.retrieve dns name servers"
echo "2.check the mount version"
echo "3.display all the running jobs"
echo "4.display process not assosciated with terminal"
echo "5.exit"
echo ""
echo "enter choice: "
read choice
case $choice in
1) echo "dns server name: "
   echo "enter link name: "
	read link
	dig $link +short
	;;
2) echo "mount version: "
	mount -V
	;;
3) echo "running jobs: "
	ps -r
	;;
4) echo "process not with terminal: "
	ps -a
	;;
5) echo  "EXITING"
	exit 0
	;;
esac
echo ""
done
