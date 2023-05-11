echo -n "Enter the number of terms:"
read n
echo "Fibonacciseries"
f1=0 f2=1
echo "$f1"
echo "$f2"
i=2
while [ $i-lt $n ]
do
f3=` expr $f1 + $f2 `
echo "$f3"
f1=$f2
f2=$f3
i=` expr $i + 1 `
done