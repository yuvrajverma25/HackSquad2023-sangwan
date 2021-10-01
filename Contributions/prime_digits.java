import java.util.Scanner;

public class Program

{

    public static void main(String[] args) {

    

    Scanner sc=new Scanner (System.in);

    

    int n=sc.nextInt();

    System.out.println ("Enter an integer="+n);

    

    int t=n;

    int d=0,f=0;

    int i=1;

    while(t>0)

    {

       d=t%10;

       for (i=1;i<=d;i++){

       if(d%i==0)

       {

           ++f;

           }

        }

           if(f==2)

           {

           System.out.println (d+" Prime number");

           }

           else{

           System.out.println (d+" Not a prime number");

        

       

       }

       

       t=t/10;

       f=0;

    }

        

    }

}
