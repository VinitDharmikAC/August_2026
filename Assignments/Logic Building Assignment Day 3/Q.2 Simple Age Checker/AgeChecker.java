// Assignment 3
//Problem 2: Simple Age Checker (Using a Method)

import java.util.Scanner;

public class AgeChecker{
        
		static int checkAgeCategory(int age){
        if( age < 18 ){
		System.out.println("You are an Minor");
		}
		else if ( age >= 18 &&  age <= 60){
		System.out.println("You are an Adult");
		}
		else {
		System.out.println("You are an Senior citizen");
		}
		return age;
	
}

        
		public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		
		
		System.out.println("Enter your age = ");
		int age = sc.nextInt();
		
		int category = checkAgeCategory(age);
		
		
		
		

		}

}