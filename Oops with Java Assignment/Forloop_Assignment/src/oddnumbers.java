
public class oddnumbers {
	
	
	

	public static void main(String[] args) {
		// display all odd numbers
		for(int i = 0; i <1000 ; i++ ) {
			if(i%2 == 0) {
				continue;
			}
			System.out.print(i + " ");
		}

	}

}
