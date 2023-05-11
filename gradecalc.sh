echo "Enter the marks"
read mark
if [ $mark -ge 91 ]
then
echo "S grade"
elif [ $mark -ge 81 -a $mark -lt 91 ]
then
echo "A grade"
elif [ $mark -ge 71 -a $mark -lt 81 ]
then
echo "B Grade"
elif [ $mark -ge 61 -a $mark -lt 70 ]
then
echo "C grade"
elif [ $mark -ge 51 ]
then
echo "D Grade"
else
echo "U grade-Fail"
fi