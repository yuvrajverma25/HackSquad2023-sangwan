   import java.util.Scanner;

public class Program

{

    public static void main(String[] args) {

    

    

    //**************************

    //**                      **

    //**   How old are you?   **

    //**                      **

    //**************************                                  

    //   Like if you like it <3

        

         Scanner sc = new Scanner(System.in);

         int age = sc.nextInt();

        

         int months = age * 12;

         int weeks = age * 52;

         int days = age * 365;

         int hours = days * 24;

         int minutes = hours * 60;

         

         System.out.println("You have lived life for :");

         System.out.println(months + " months.");

         System.out.println("in other words for "+weeks+" weeks.");

         System.out.println("or, for "+days+" days");

         System.out.println("or "+ hours + " hours.");

         System.out.println("or about "+ minutes + " minutes.");

         System.out.println("Life's short, Enjoy it :) ");

         

    }

}
