import java.util.*;

public class Palidrome{
    public static void main(String[] args){
	
	Scanner sc = new Scanner(System.in);
	
	System.out.println("Enter a String = ");
	String str = sc.nextLine();
	
	
	String reverse = new StringBuffer(str).reverse().toString();
	
	if(str.equals(reverse)){
	
	System.out.println("The String is a Palindrome");
	}
	else{
	System.out.println("The String is not a Palindrome");
	}
	
	
	}



}