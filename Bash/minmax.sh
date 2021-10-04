echo "How many Entries?"
read n
i=1
echo "Enter the first number:"
read numb1
max=$numb1
min=$numb1
echo "Enter `expr $n - 1` numbers:"
while [ $i -lt $n ]
do
read numb
if [ $numb -gt $max ]
then
max=$numb
fi
if [ $numb -lt $min ]
then
min=$numb
fi
i=`expr $i + 1`
done
echo Maximum Value = $max
echo Minimum Value = $min
