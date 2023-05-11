#arithmetic operations on two nos. A and B
#!/bin/bash
clear
echo -n "Enter the value of A:"
read A
echo -n "Enter the value of B:"
read B
echo " "
echo "Press 1 to add A and B"
echo "Press 2 to subtract A and B"
echo "Press 3 to multiply A and B"
echo "Press 4 to division A and B"
echo -n "Enter your option:"
read option
31
case $option in
1) echo "Addition of A and B is `expr $A + $B`"
;;
2) echo "Subtraction of A and B is `expr $A - $B`"
;;
3) echo "Multiplication of A and B is `expr $A \* $B`"
;;
4) echo "Division of A and B is ` echo "($A / $B)" | bc -l`"
;;
esac
