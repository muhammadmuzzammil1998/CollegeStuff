read -p "Enter the file name: " file

if [ -d $file ]; then
	echo "$file is a directory"
elif [ -f $file ]; then
	echo "$file is an ordinary file"
else
	echo "$file is neither a directory nor an ordinary file"
fi