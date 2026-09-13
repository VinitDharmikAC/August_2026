
public class Triangle {
	
	int length;
	int breadth;
	int height;	

	public Triangle(int l,int b, int h) {
		this.length  = l;
		this.breadth = b;
		this.height = h;
		
	}
	
	public static void main(String[] args) {
		
		Triangle t1 = new Triangle(3,4,5);
		
		System.out.println("Area of Triangle = " +  (0.5 * t1.length * t1.breadth));
		
		System.out.println("Parameter of the Triangle is = " + (t1.length + t1.breadth + t1.height) );
			
		}
		
		

	}

