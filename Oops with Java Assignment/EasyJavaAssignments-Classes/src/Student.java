
public class Student {
	
	String name;
	int roll_no;
	String phone_no;
	String aadress;
	

	public static void main(String[] args) {
		
		Student s1 = new Student();
		Student s2 = new Student();
		s1.roll_no = 2;
		s1.name = "John";
		s1.phone_no = "7845963255";
		s1.aadress = "Nagpur";
		
		
		s2.roll_no = 1;
		s2.name= "Sam";
		s2.phone_no = "7894561237";
		s2.aadress = "Mumbai";
		
		
		System.out.println(s1.name);
		System.out.println(s1.roll_no);
		System.out.println(s1.phone_no);
		System.out.println(s1.aadress);
		
		System.out.println("=========================================");
		
		System.out.println(s2.name);
		System.out.println(s2.roll_no);
		System.out.println(s2.phone_no);
		System.out.println(s2.aadress);
		
		
		
		
		
	

	}

}
