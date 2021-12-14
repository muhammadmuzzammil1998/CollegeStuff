echo "Who is the lead actor in the film Main hoon na"
echo "1) Hrithik Roshan"
echo "2) ShahRukh Khan"
echo "3) Amitabh Bachchan"
echo "4) Shahid Kapoor"
echo "5) None of the above"

read -p "Enter your answer: " answer

case $answer in
    1)
        echo "Correct answer"
            ;;
    2|3|4|5)
        echo "Wrong answer"
            ;;
    *)
        echo "Invalid input"
            ;;
esac
