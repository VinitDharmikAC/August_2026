public class GradeEvaluation {
    public static void main(String[] args) {

        int maths = 70;
        int science = 89;
        int hindi = 71;

        int avg = (maths + science + hindi) / 3;

        System.out.println("The Average marks of a student :" + avg);

        if (avg >= 90) {
            System.out.println("A");
        } 
        else if (avg >= 70 && avg <= 89) {
            System.out.println("B");
        } 
        else if (avg >= 50 && avg <= 69) {
            System.out.println("C");
        } 
        else if (avg >= 30 && avg <= 49) {
            System.out.println("D");
        } 
        else {
            System.out.println("Fail");
        }
    }
}