while(true); 
do
	read -p "Enter the first number: " num1
	read -p "Enter the second number: " num2
	read -p "Enter the operation: " op

	case $op in
		+ )	
			echo "$num1 + $num2 =" `expr $num1 + $num2` 
			;;
		- )	
			echo "$num1 - $num2 =" `expr $num1 - $num2` 
			;;
		\* ) 
			echo "$num1 * $num2 =" `expr $num1 \* $num2`
			;;
		/ )	
			echo "$num1 / $num2 =" `expr $num1 / $num2` 
			;;
		* )	
			echo "Invalid Operation" 
			;;
	esac
done