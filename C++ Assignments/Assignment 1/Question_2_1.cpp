#include<iostream>
using namespace std;

// Original Bug  V1 --Call by Value

    void resetSensorPairV1(int reading1, int reading2){

        int temp = reading1;
        reading1 = reading2;
        reading2 = temp;

    }

 // Fix 1 - call by Reference
 void resetSensorPairV2(int& reading1, int& reading2){
    int temp = reading1;

    reading1 = reading2;
    reading2 = temp;

 }
 //fix 2 - Call by pointer

 void resetSensorPairV3(int* reading1, int* reading2){

    int temp = *reading1;
    *reading1 = *reading2;
    *reading2 = temp;

 }

 int main(){
    int A = 55;
    int B = 12;

    cout<<"--- V1: Call by Value ---" << endl ;
    //here V1 it does not swap the value of A and B.It only swaps the copies of the A and B present in the function.
    //The value at the A and B stays the same. Thats way the call by value does not work here and it does not swap the values .
    cout<<"Before : A = "<< A <<"  "<< " B = "<<B<< endl;
    resetSensorPairV1(A,B);
    cout<<"After  : A = " << A <<"  "<< "B = "<<B << endl;
    cout<<endl;

    cout<<" --- V2: Call by Reference -- "<<endl;

    cout<<"Before : A = " << A <<"  "<< "B = " <<B<<endl;
    resetSensorPairV2(A,B);
    cout<<"After  : a = "<< A <<"  "<< "B = "<<B<< endl;
    cout<< endl;

    cout<<"--- V3: Call by Pointer ---"<<endl;

    cout<<"Before : A = "<< A <<"  "<< "B = " << B <<endl;
    resetSensorPairV3(&A  ,&B);
    cout<<"Aftere : a = "<< A <<"  "<< "B = "<<B<< endl;

    return 0;

 }