public class Employee1 {

    int salary;
    int hours;

    void getInfo(int s, int h) {
        salary = s;
        hours = h;
    }

    void addSal() {
        if(salary < 500) {
            salary = salary + 10;
        }
    }

    void addWork() {
        if(hours > 6) {
            salary = salary + 5;
        }
    }

    public static void main(String[] args) {

        Employee1 e = new Employee1();

        e.getInfo(400, 8);

        e.addSal();
        e.addWork();

        System.out.println("Final Salary: " + e.salary);
    }
}
