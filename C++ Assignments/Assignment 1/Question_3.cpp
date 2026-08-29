#include<iostream>
using namespace std;

class Employee{

    private:

    int empId;
    string name;
    string department;
    char grade;
    double basicSalary;
    bool isActive;

    public:

    static int employeeCount;

    Employee()
    {
        empId = 1000 + employeeCount + 1;
        employeeCount++;

        name = "";
        department = "";
        grade = 'D';
        basicSalary = 0;
        isActive = true;
    }


    // for name
    void setName(const string& n)
    {
        if(n != "")
        {
            name = n;
        }
        else
        {
            cout<<"Error: Name Cannot be empty"<<endl;
        }
    }


    // for department
    void setDepartment(const string& dept)
    {
        if(dept == "Engineering" ||
           dept == "HR" ||
           dept == "Finance" ||
           dept == "Operations")
        {
            department = dept;
        }
        else
        {
            cout<<"Error: "<<dept<<" is not a registered department."<<endl;
        }
    }


    // for grade
    void setGrade(char g)
    {
        if(g == 'A' || g == 'B' || g == 'C' || g == 'D')
        {
            grade = g;
        }
        else
        {
            cout<<"Error: Invalid grade. Accepted values: A, B, C, D."<<endl;
        }
    }


    // for salary
    void setBasicSalary(double salary)
    {
        if(salary > 10000 && salary < 500000)
        {
            basicSalary = salary;
        }
        else
        {
            cout<<"Error: Salary must be between Rs.10,000 and Rs.5,00,000. Value rejected."<<endl;
        }
    }


    // for boolean
    void deactivate()
    {
        isActive = false;
    }


    // Getter
    int getEmpId() const
    {
        return empId;
    }

    string getName() const
    {
        return name;
    }

    string getDepartment() const
    {
        return department;
    }

    char getGrade() const
    {
        return grade;
    }

    double getBasicSalary() const
    {
        return basicSalary;
    }

    bool getIsActive() const
    {
        return isActive;
    }


    // Allowances
    double computeAllowances() const
    {
        if(grade == 'A')
        {
            return basicSalary * 0.40;
        }
        else if(grade == 'B')
        {
            return basicSalary * 0.30;
        }
        else if(grade == 'C')
        {
            return basicSalary * 0.20;
        }
        else
        {
            return basicSalary * 0.10;
        }
    }


    // Gross Salary
    double computeGrossSalary() const
    {
        return basicSalary + computeAllowances();
    }


    // Tax
    double computeTax() const
    {
        double gross = computeGrossSalary();

        if(gross <= 50000)
        {
            return 0;
        }
        else if(gross <= 100000)
        {
            return (gross - 50000) * 0.10;
        }
        else
        {
            return 5000 + (gross - 100000) * 0.20;
        }
    }


    // Net Salary
    double computeNetSalary() const
    {
        return computeGrossSalary() - computeTax();
    }


    // Print Payslip
    void printPayslip() const
    {
        cout<<endl;
        cout<<"============================================"<<endl;
        cout<<"EMPLOYEE PAYSLIP"<<endl;
        cout<<"============================================"<<endl;

        cout<<"Emp ID      : "<<getEmpId()<<endl;
        cout<<"Name        : "<<getName()<<endl;
        cout<<"Department  : "<<getDepartment()<<endl;
        cout<<"Grade       : "<<getGrade()<<endl;

        cout<<"Status      : ";

        if(getIsActive())
        {
            cout<<"Active"<<endl;
        }
        else
        {
            cout<<"Inactive"<<endl;
        }

        cout<<"--------------------------------------------"<<endl;

        cout<<"Basic Salary     : Rs. "<<getBasicSalary()<<endl;
        cout<<"Allowances       : Rs. "<<computeAllowances()<<endl;
        cout<<"Gross Salary     : Rs. "<<computeGrossSalary()<<endl;

        cout<<"--------------------------------------------"<<endl;

        cout<<"Tax Deduction    : Rs. "<<computeTax()<<endl;
        cout<<"Net Salary       : Rs. "<<computeNetSalary()<<endl;

        cout<<"============================================"<<endl;
    }


    // static getter
    static int getEmployeeCount()
    {
        return employeeCount;
    }


    // accept details
    void acceptDetails()
    {
        string n;
        string dept;
        char g;
        double salary;

        cout<<"Enter name: ";
        cin>>n;
        setName(n);

        cout<<"Enter department: ";
        cin>>dept;
        setDepartment(dept);

        cout<<"Enter grade: ";
        cin>>g;
        setGrade(g);

        cout<<"Enter basic salary: ";
        cin>>salary;
        setBasicSalary(salary);
    }

};


// static member
int Employee::employeeCount = 0;


int main()
{
    // stack object
    Employee e1;

    // heap objects
    Employee* e2 = new Employee();
    Employee* e3 = new Employee();


    e1.acceptDetails();
    e2->acceptDetails();
    e3->acceptDetails();


    // compiler error because these are private
    // e1.empId = 999;
    // e1.basicSalary = -1000;


    e1.printPayslip();
    e2->printPayslip();
    e3->printPayslip();


    // resignation
    e3->deactivate();

    if(!e3->getIsActive())
    {
        cout<<e3->getName()
            <<" is no longer active. Payroll skipped."
            <<endl;
    }


    cout<<"Total Employees : "
        <<Employee::getEmployeeCount()
        <<endl;


    delete e2;
    delete e3;

    return 0;
}