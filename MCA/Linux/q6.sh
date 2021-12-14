echo "Enter marks in five subjects"
read m1 m2 m3 m4 m5

per=`expr \( $m1 + $m2 + $m3 + $m4 + $m5 \) / 5`

echo Percentage $per\%

if [ $per -ge 60 ]; then
        echo First division
elif [ $per -ge 50 -a $per -lt 60 ]; then
        echo Second division
elif [ $per -ge 40 -a $per -lt 50 ]; then
        echo Third division
elif [ $per -ge 30 ]; then
        echo Pass
else
        echo Fail
fi