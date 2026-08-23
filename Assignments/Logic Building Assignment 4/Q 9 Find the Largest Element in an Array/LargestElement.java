import java.util.*;


public class LargestElement {

    public static int findLargest(int[] numbers){
	
	Arrays.sort(numbers);
	return numbers[4];
	
	
	}
	public static void main(String[] args){
	
	Scanner sc = new Scanner(System.in);
	int[] numbers = new int[5];
	
	System.out.println("Enter 5 numbers : ");
	for(int i = 0;i<5;i++){
	  numbers[i]=sc.nextInt();
	  
	}
	int largest = findLargest(numbers);
	
	System.out.println("The largest element in the array is = " + largest);
	
	}












}