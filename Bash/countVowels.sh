echo "Enter a String"
cat > str
echo TO COUNT THE VOWELS IN THE GIVEN STRING
len=`cat str | wc -c`
echo Length of String = $len
i=1
actr=0;ectr=0;ictr=0;octr=0;uctr=0;othr=0;
while [ $i -le $len ]
do
ch=`cat str | cut -c $i`
case $ch in
a|A)actr=`expr $actr + 1`;;
e|E)ectr=`expr $ectr + 1`;;
i|I)ictr=`expr $ictr + 1`;;
o|O)octr=`expr $octr + 1`;;
u|U)uctr=`expr $uctr + 1`;;
*)othr=`expr $othr + 1`;;
esac
i=`expr $i + 1`
done
echo Number of a or A = $actr
echo Number of e or E = $ectr
echo Number of i or I = $ictr
echo Number of o or O = $octr
echo Number of u or U = $uctr
echo Number of other characters = $othr
