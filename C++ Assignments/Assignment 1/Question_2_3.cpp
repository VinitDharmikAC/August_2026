//Question_2_3.cpp
#include<iostream>
using namespace std;

int main(){


    int statusReg  = 0b10110001;        // Read-only from firmware side
    int controlReg = 0b00000000;        // Firmware writes here
    int dataReg    = 0b11001010;        // For reassignment demo

    //RegPtr1 - pointer to const int

    const int* regPtr1 = &statusReg;

    cout<<"Status Register :" << *regPtr1 <<endl;
    //regPtr1 = 50;
    // ERROR: regPtr1 is a pointer to const int, so we cannot change the value.

    //regPtr1 =&dataReg;
    //this is allowed beacuse regPtr1 is not constant so we can change the value;



    //regPtr2- const pointer to int 

    int* const regPtr2 = &controlReg;
    *regPtr2 = 25;
    cout<< "Control Register : " << *regPtr2 <<endl;
    //regPtr2 =&dataReg
    //regPtr is a constant pointer so can't point it to another address.
    


    //regPte3 -const pointer to const int 
    const int* const regPtr3 = &statusReg;

    cout<<"ROM Config / Status Register : " << *regPtr3 << endl;
    //regPtr3 = 50;
    //regPtr3 points to const int thats why cant be changed;

    //regPtr3 = &dataReg;
    //error :regptr is const pointer so it cannot point to another address 


}