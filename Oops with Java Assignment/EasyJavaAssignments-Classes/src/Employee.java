
public class Employee {
	
	String name;
	int yearofjoining;
	int salary;
	String address;
	
	
	Employee(String name,int yearofjoining,  String address){
		this.name = name;
		this.yearofjoining = yearofjoining;
	
		this.address =  address;		
		
	}
	
	void display(){
		
		System.out.println(name + "     " + yearofjoining + "     " + address);
		
	}
	
	
	
	
	
	
	
	

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Employee e1 = new Employee("Robert",1994 , "64-WallsStreat");
		Employee e2 = new Employee("Sam"   ,2000 , "68D-WallsStreat");
		Employee e3 = new Employee("John"  ,1994 , "26B-WallsStreat");
		
		
		
		System.out.println("Name" + "  " + " Year of Joining " + "  " + "Address");
		e1.display();
		e2.display();
		e3.display();
		

	}

}
