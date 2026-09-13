
public class Program {

	public static void main(String[] args) {
	
	Date objDate = new Date();
	
	int choice;
	
	do {
		System.out.println("Date Menu");
		System.out.println("1.Set Date ");
		System.out.println("2. Add Days");
		System.out.println("3.Add Months");
		System.out.println("4.Add Years");
		System.out.println("5.Display");
		System.out.println("6.Exit");
		
		
		choice = ConsoleInput.getInt();
		
		if(choice == 1) {
			System.out.println("Enter the Day =");
			int day = ConsoleInput.getInt();
			
			System.out.println("Enter the Month =");
			int month = ConsoleInput.getInt();
			
			System.out.println("Enter the Month =");
			int year = ConsoleInput.getInt();
			
			
			objDate.setDate(day,month,year);
			
			System.out.println(objDate.getDay() + "/" + objDate.getMonth() + "/" + objDate.getYear());
			
			
			
			
		}
		else if (choice==2) {
			System.out.println("How many days to add? =");
			int days = ConsoleInput.getInt();
			objDate.addDays(days);
			
			System.out.println(objDate.getDay() + "/" + objDate.getMonth() + "/" + objDate.getYear());
		}
		
		else if(choice == 3) {
			System.out.println("How many months to add? =");
			int months = ConsoleInput.getInt();
			objDate.addMonths(months);
			
			System.out.println(objDate.getDay() + "/" + objDate.getMonth() + "/" + objDate.getYear());
			
		}
		else if(choice == 4) {
			System.out.println("How many months to add? =");
			int years = ConsoleInput.getInt();
			objDate.addYears(years);
			
			System.out.println(objDate.getDay() + "/" + objDate.getMonth() + "/" + objDate.getYear());
		
	}
		
		else if (choice == 5) {
            System.out.println(objDate.getDay() + "/" + objDate.getMonth() + "/" + objDate.getYear());
        }
		
		
		
		 else if (choice == 6) {
             System.out.println("Exiting...");
         }
		
		
         else {
             System.out.println("Invalid choice");
         }
	} while (choice != 6);


	}

}
