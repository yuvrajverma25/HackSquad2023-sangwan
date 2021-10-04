import java.util.Scanner;
public class Fibonacci {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int a = 0;                    //initializing a with 0's value (a is first digit)
        int b = 1;                    //initializing b with 1 (b is the second digit)
        int count = 1;                //count is 1 because 0 will be already printed before entering the while loop
        System.out.print(a + " ");

        while(count<=n-1){
            int counter = b;
            b = b + a;
            a = counter;
            count++;
            System.out.print(a + " ");
        }

    }
}
