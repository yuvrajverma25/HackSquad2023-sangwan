echo "Enter a number:"
read num
echo "To Reverse a number and to check if its a Palindrome"
echo "The given number is:$num"
original=$num
rev=0
while [ $num -gt 0 ]
do
rem=`expr $num % 10`
rev=`expr $rev \* 10 + $rem`
num=`expr $num / 10`
done
echo Reverse is : $rev
if [ $original -eq $rev ]
then
echo $original is a Palindrome
else
echo $original is not a Palindrome
fi
