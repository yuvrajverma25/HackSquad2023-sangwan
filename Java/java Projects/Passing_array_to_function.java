import java.util.*;
public class Passing_array_to_function {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("enter the array size ");
		Scanner sc=new Scanner(System.in);
		int size=sc.nextInt();
		int [] arr=new int[size];
		System.out.println("enter the array elements ");
		for(int i=0;i<arr.length;i++) {
			arr[i]=sc.nextInt();
		}
		System.out.println("original array elements are:");
		for(int i=0;i<arr.length;i++) {
			System.out.print(arr[i]+" ");
		}
		System.out.println("\noriginal array is ponting to memory location "+arr+" <- hashcode");

		//call increment function for incrementing each array element value by 1
		increment(arr);//passing array hashcode
		
		//calling print function
		print(arr);

	}

	public static void increment(int[] arr) {
		for(int i=0;i<arr.length;i++) {
			arr[i]++;
		}
		System.out.println("\nAfter incrementing the arr is pointing to "+arr);
	}

	public static void print(int[] arr) {
		System.out.println("Array after incrementing each element by 1:");
		for(int i=0;i<arr.length;i++) {
			System.out.print(arr[i]+" ");
		}
		System.out.println("\nwhen print function is called the arr is pointing to "+arr);
	}



}
