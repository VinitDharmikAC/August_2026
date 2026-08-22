//Assignment 3 
//Problem 6: Calculate the Sum of Numbers from 1 to N .

import java.util.Scanner;


    public class SumOfNumber{
	
	void calculateSum(int n){
	
	int sum = 0;
	for (int i = 1; i <= n ; i++){
	   sum = sum + i;
	
	}
	
	System.out.println("Sum of the number = " + sum);
	;}
	
	
	
	
	
	public static void main(String[] args){

	Scanner sc = new Scanner(System.in);
	System.out.println("Enter your number = ");
	int n = sc.nextInt();
	
	SumOfNumber a = new SumOfNumber();
	
	a.calculateSum(n);
	
	
	
	}
	
	
	
	
	
	}