

public class Entry {
	
	public static void main(String[] agrs) {
		Manager[] arrManager = new Manager [40];



System.out.println("Enter the name ");
String name = ConsoleInput.getString();

System.out.println("Enter the address ");
String address = ConsoleInput.getString();

System.out.println("Enter the age ");
int age = ConsoleInput.getString();


arrManager[0]= new Manager(name, address, age, true, 1.1f, 1.1f);

arrManager[0]= setName("ddfghj");
System.out.println(arrManager[0].getName());
}
}



