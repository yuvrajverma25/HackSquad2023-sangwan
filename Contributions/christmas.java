public class Program

{

    static void pyramid(int a, int b, int c){

        int i, j, k, l = 0;

        for(i = a; i <= b; i++){

            for (j = c - l; j > a; j--)

                System.out.print(" ");

            for( k = 1; k <= i; k++){

                if(k == 1)

                    System.out.print(" /");

                if(k == i)

                    System.out.print(" \\");

                else

                    System.out.print(" *");

            }

            System.out.println();

            l++;

        }

    }

    static void space(int n){

        for(int i = 0; i <= n; i++)

            System.out.print(" ");

    }

    static void leg(int n){

        for(int i = 0; i <= n; i++){

            space(10);

            System.out.println("|X|"); 

        }

    }

    public static void main(String[] args) {

        space(11);

        System.out.print("^");

        pyramid(0,5,11);

        pyramid(3,7,11);

        pyramid(5,11,11); 

        leg(4);

        System.out.print("\n\n Merry christmas in advance");

    }

}
