import java.util.*;

public class SortingArray{

     public static void sortArray(int[] numbers){
	 
	 Arrays.sort(numbers);
	 System.out.println("Array in Ascending order :");
	 for (int number : numbers){
	 System.out.println(number);
	 }
	 
	 }
	 public static void main(String[] args){
	 Scanner sc = new Scanner(System.in);
	 int[] numbers = new int[5];
	 
	 System.out.println("Enter 5 numbers : ");
	 for(int i = 0; i < 5; i++){
	 
	 numbers[i]= sc.nextInt();
	 }
	 sortArray(numbers);
	 
	 }






}