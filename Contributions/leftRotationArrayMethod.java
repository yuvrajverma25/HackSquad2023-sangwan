import java.util.*;

public class leftRotationArrayMethod{
    public static void main(String[] args) {

        int [] array = new int [] {1, 2, 3, 4, 5,6};  
        Scanner sc = new Scanner (System.in);

        System.out.println("Enter number of times to be rotated: ");
        int number =sc.nextInt();
        
        System.out.println("Original array: ");  
        for (int i = 0; i < array.length; i++) {   
            System.out.print(array[i] + " ");   
        }    
           
        for(int i = 0; i < number; i++){  
            int j, firstelement;  
            //Stores the first element of the array  
            firstelement = array[0];  
          
            for(j = 0; j < array.length-1; j++){  
                 
                array[j] = array[j+1];  
            }  
         
            array[j] = firstelement;  
        }  
          
        System.out.println();  
          
      
        System.out.println("Array after left rotation: ");  
        for(int i = 0; i< array.length; i++){  
            System.out.print(array[i] + " ");  
        }  
    }  

}