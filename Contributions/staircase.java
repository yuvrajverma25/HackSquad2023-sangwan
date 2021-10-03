import java.util.*;

public class staircase {
    public static void main (String[]args){
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter number of times :");
        int choice=sc.nextInt();
        for(int i = 0; i < choice; i++)
      {
        for(int j = 0; j < choice;j++)
        {
          if(i >= j)
          {
            System.out.print("# ");
          }
        }
        System.out.println();

    }
    
}
}
