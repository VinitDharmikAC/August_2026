
public class Rectangle {
	
	int base;
	int height;
	
	
	Rectangle(int base, int height ){
		this.base = base;
		this.height = height;
		
	}
	
	public int calculateArea() {
		return base*height;
	}
	
	
	

	public static void main(String[] args) {
		Rectangle t1 = new Rectangle(4,5);
		t1.calculateArea();
		
		Rectangle t2 = new Rectangle(5,8);
		t1.calculateArea();
		
		System.out.println("The area of the 1st rectangle is " + t1.calculateArea());
		System.out.println("The area of the 2nd rectangle is " + t2.calculateArea());
		

	}

}
