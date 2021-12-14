sum=0

echo "Positional parameters: $*"

for i in $*
do
   sum=`expr $sum + $i`
done

echo "Sum of positional parameters is: $sum"