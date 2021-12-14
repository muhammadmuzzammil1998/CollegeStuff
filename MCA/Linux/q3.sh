set I am in classroom taking test of UNIX

count=1

for i in $*; do
    echo "Positional parameter $count is set to $i"
    count=$[ $count + 1 ]
done