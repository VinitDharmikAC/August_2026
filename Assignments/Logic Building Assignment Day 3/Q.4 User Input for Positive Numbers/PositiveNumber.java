import java.util.Scanner;

public class PositiveNumber {

    static int askForPositiveNumber(int num1, Scanner sc) {

        do {
            if (num1 > 0) {
                  System.out.println("Its a positive number.");
            } else {
               System.out.println("Please enter a positive number.");
               num1 = sc.nextInt();
            }

        } 
		while (num1 <= 0);

        return num1;
		
		
		
		
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

            System.out.println("Enter your number = ");
          int num1 = sc.nextInt();

             num1 = askForPositiveNumber(num1, sc);

         System.out.println("You entered a positive number: " + num1);

         sc.close();
    }
}
