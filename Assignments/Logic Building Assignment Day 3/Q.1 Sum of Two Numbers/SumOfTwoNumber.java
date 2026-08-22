//Assignment 3 
//Problem 1: Sum of Two Numbers (Using a Method)

import java.util.Scanner;

public class SumOfTwoNumber{
    
    static int sum(int a1, int a2){
	int result = a1 + a2;
	return result;
}

   public static void main(String[] args){
   
   Scanner sc = new Scanner(System.in);
   
   System.out.println("Enter your 1st number = ");
   int a = sc.nextInt();
   
   System.out.println("Enter your 2nd number = ");
   int b = sc.nextInt();
   
   int total = sum(a,b);
   
   System.out.println("The sum of Two number is = " + total);
   
   
   }




}