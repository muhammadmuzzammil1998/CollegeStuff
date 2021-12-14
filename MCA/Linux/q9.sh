read -p "Enter a number: " num

if [ $(($num % 2)) ]; then
	echo "$num is even"
else
	echo "$num is odd"
fi