#include<iostream>
#include<memory>
using namespace std;

class patient{
    int patientId;
    string name;
    int age;
    string ward;
    const string bloodGroup;

    public:

    //Getters 
       int getpatientId() const {
        return patientId;
    }
       string getpatientname() const {
        return name;
    }
       int getAge() const {
        return age;

    }
    string getWard() const {
        return ward;
    }

    string getBloodGroup()const{
        return bloodGroup;
    }


    //setters
    void setPatientId(int id)
    {
        patientId = id;
    }

    void setName(const string& newName)
    {
        name = newName;
    }

    void setAge(int newAge)
    {
        age = newAge;
    }

    void setWard(const string& newWard)
    {
        ward = newWard;
    }

    //default constructor 
    patient():patientId(0),name("Unkown"),age(0),ward("General"),bloodGroup("o+"){
        cout<<"[Constructor]Default patient regestered."<<endl;
    }

    // Constructor 2 — Emergency admission: only id and name known
    patient(int id ,const string& name):patientId(id),name(name),age(0),ward("Emergency"),bloodGroup("o+"){
        cout<<"Constructor 2 — Emergency admission: only id and name known"<<endl;
    }

        // Constructor 3 — Full admission details
       patient(int id, const string& name, int age,
        const string& ward, const string& bg) : 
        patientId(id), name(name), age(age),ward(ward),bloodGroup(bg)
    {
    cout << "Normal Patient Registered!" << endl;
    }
    
     
    void displayRecord()const{
        cout<<"Patient Record:"<<endl;
        cout<<"ID :"<<patientId<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"Ward :"<<ward<<endl;
        cout<<"Blood Group :"<<bloodGroup<<endl;



    }
    void transferWard(const string& newWard){
        cout<<"Ward transfer: "<<name<<"-->"<<newWard<<endl;
        ward = newWard;
        
    }
    ~patient(){
        cout<< name << " discharged !!!" << endl;
    }

};
int main(){
    cout << "===== HOSPITAL PATIENT REGISTRY =====" << endl;

    

    patient p1(1001, "Meera Joshi", 34,
               "Cardiology", "B+");

    patient p2(1002, "Raj Patel");

    patient p3;

    cout<<"Name : "<<p1.getpatientname()<<endl;
    cout<<"Age :"<<p1.getAge()<<endl;

    p3.setPatientId(1003);
    p3.setName("Allu Arjun");
    p3.setAge(43);
    p3.setWard("General");

    cout<<"--------Patient 3-----------"<<endl;
    p3.displayRecord();
    patient* patients = new patient[4];

    cout<<"--------Patients Array---------"<<endl;

    for(int i =0;i<4;i++){
        patients[i].displayRecord();
        cout<<endl;

    }
    p2.transferWard("ICU");
    delete[]patients;
   
    return 0;
}
