echo "Enter the year"
read year
b=`expr $year % 4`
if [ $b -eq 0 ]
then
echo "The year is a Leap year"
else
echo "This is not a Leap year"
fi