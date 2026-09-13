
public class Date {

private int day;
private int month;
private int year;

public void setDate(int dd, int mm, int yy ) {
	
	year = yy;
	
	if(mm<1 || mm>12)
		month = 1;
	else 
		month = mm;
	
	
	
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ) {
		if(dd <1 || dd>31)
			day = 1;
		else
			day = dd;
		
	}
	
	
	else if(month == 4 || month == 6 || month ==9  || month == 11) {
		if(dd< 1 || dd>30 )
			day = 1;
		else 
			day = dd;
	}
	
	
	 
		 else if (month == 2){
			 if ((yy % 4 == 0 && yy % 100 != 0) || (yy % 400 == 0)) {
				 if (dd <1 || dd>29) {
					 day = 1;
					 
				 }
				 else 
					 day =dd;
				 
			 }else {
				 
				 if(dd<1 || dd > 28) {
					 day = 1;
				 }
				 else {
					 day = dd;
				 }
			 }
			
			
		}
		
		
	}

	private int getMaxDays(int mm, int yy) {
		
		int[] daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		
		if (mm == 2 && ((yy % 4 == 0 && yy % 100 != 0) || (yy % 400 == 0)))
			
			return 29;
		
			return daysInMonth[mm - 1];
}


		public void addDays(int days) {
			
			day = day + days;
			
			int maxDays = getMaxDays(month , year);
			
			while (day>maxDays) {
				day = day - maxDays;
				month = month + 1;
				
				if(month > 12) {
					month = 1;
					year = year +1;
					
				}
				
				maxDays = getMaxDays(month,year);
				
			}
			
			
			
			
		}
		
		public void addMonths(int months) {
			month  = month + months;
			
			while(month>12) {
				month = month - 12;
				year = year +1;
			}
		}
		
		public void addYears(int years) {
			year = year + years;
		}
		
		
		//Getter
		
		public int getDay() {
			return day;
		}
		
		
		public int getMonth() {
			return month;
			
		}
		
		public int getYear() {
			return year;
		}

}







