import java.util.*;

public class Counting{

     public static void countnumbers(int[] numbers){
	 
	 int positive = 0;
	 int negative = 0;
	 
	 for(int number : numbers){
	 
	 if(number > 0){
	 positive++;
	 }
	 else if(number < 0){
	 negative++;
	} 
	}
	
	System.out.println("Positive numbers = " + positive );
	System.out.println("Negative numbers = " + negative);
	}
	 public static void main(String[] args){
	 
	 Scanner sc = new Scanner(System.in);
	 int[] numbers = new int[6];
	 
	 System.out.println("Enter 6 numbers = ");
	 for(int i = 0; i<6;i++){
	 
	 numbers[i] = sc.nextInt();
	 }
	 countnumbers(numbers);
	 
	 }



}