echo "Enter two integers: "
read m n
echo "Giveb numbers are: "
echo "M=$m and N=$n"
temp=`expr $m \* $n`
while [ $m != $n ]
do
if [ $m -gt $n ]
then
m=`expr $m - $n`
else
n=`expr $n - $m`
fi
done
echo GCD=$n
lcm=`expr $temp / $n`
echo LCM=$lcm
