import java.util.*;

public class SearchIndex{

    public static void main(String[] args){
	
	Scanner sc = new Scanner(System.in);
	int[] numbers = new int[5];
	
	System.out.println("Enter 5 numbers = ");
	for(int i = 0; i < 5; i++){
	numbers[i] = sc.nextInt();
	
	}
	Arrays.sort(numbers);
	
	System.out.println("Enter the number to be searched = ");
	int search = sc.nextInt();
	
	int index = Arrays.binarySearch(numbers, search);
	
	if(index >= 0){
	System.out.println("The number " + search + "is found at index " + index);
	}
	else{
	
	System.out.println("Not found int the array!");
	
	}
	}
	}