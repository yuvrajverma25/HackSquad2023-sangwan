import java.util.Scanner;
	public class sumofdiagonals
	{
		public static void main(String[] args) {
		    Scanner sc = new Scanner(System.in);
			int mat[][] = new int[3][3];
			int i=0,j=0;
			System.out.println("For 1st matrix");
			for(i=0;i<3;i++){
			    for(j=0;j<3;j++){
			        System.out.println("Enter the number for position "+(i+1)+","+(j+1));
			        mat[i][j]=sc.nextInt();
			    }
			}
			System.out.println("The Sum is ");
			int s=mat[0][0]+mat[1][1]+mat[2][2]+mat[0][2]+mat[2][0];
			    System.out.println(s);
		}
}
