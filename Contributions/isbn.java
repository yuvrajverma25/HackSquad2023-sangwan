import java.util.Scanner;

class Number

{

   public static void main(String args[])

   {

   Scanner sc=new Scanner(System.in);

   long n=sc.nextLong();

   long s=0,p=1,c=10,d;

   while(n!=0)

   {

     d=n%10;

     p=d*c;

     s=s+p;

     c--;

     n=n/10;

   }

   if(s%10==0)

   System.out.println(" It is an ISBN number ");

   else

   System.out.println(" It is not an ISBN number ");

   }

}
