echo "Enter a positive number"
read n
num=$n
f=1
until[ $n -lt 1 ]
do
f=` expr $f \* $n`
n=` expr $n - 1 `
done
echo "Factorial of $num is $f"