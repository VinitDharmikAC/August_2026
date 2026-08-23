import java.util.*;

public class SearchArray{

   public static void searchNumber(Integer[] numbers, int search){
   
   if(Arrays.asList(numbers).contains(search)){
   System.out.println("Found");
   }
   else{
   System.out.println("Not Found");
   }
   
   }
   public static void main(String[] args){
   
   Scanner sc = new Scanner(System.in);
   Integer[] numbers = new Integer[5];
   
   System.out.println("Enter 5 numbers = ");
   for(int i = 0; i<5 ; i++){
   numbers[i] = sc.nextInt();
   }
   System.out.println("Enter the number to be search = ");
   int search = sc.nextInt();
   
   	searchNumber(numbers, search);
   }
   }