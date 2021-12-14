read -p "Enter limit: " limit

i=1
while [ $limit -gt 0 ]; do
    if [ $((i%2)) -ne 0 ]; then
        echo -n "$i "
        limit=$((limit-1))
    fi
    i=$((i+1))
done
echo ""