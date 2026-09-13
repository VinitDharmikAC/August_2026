public class Program {

    public static void main(String[] args) {

        System.out.println("1. Add  2. Subtract  3. Multiply  4. Divide");

        int choice = ConsoleInput.getInt();

        System.out.println("Enter first number");

        int num1 = ConsoleInput.getInt();

        System.out.println("Enter second number");

        int num2 = ConsoleInput.getInt();

        Calculator objCalculator = new Calculator();

        switch (choice) {

            case 1:
                System.out.println(objCalculator.add(num1, num2));
                break;

            case 2:
                System.out.println(objCalculator.subtract(num1, num2));
                break;

            case 3:
                System.out.println(objCalculator.multiply(num1, num2));
                break;

            case 4:
                System.out.println(objCalculator.divide(num1, num2));
                break;

            default:
                System.out.println("Invalid choice");
        }
    }
}