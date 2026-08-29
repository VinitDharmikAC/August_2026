#include<iostream>
using namespace std;

int main(){

    double temperature[3][3];

    //Read temperature
    for(int i = 0;i<3; i++){
        for(int j = 0 ;j< 3; j++){
            cout<<"Enter the temperature of the floor " << i + 1 <<" , Room " << j+1 << ":" ;
            cin>> temperature[i][j] ;
        }
    }

    //Display Reading
    cout<<endl;
    cout<< "     Room 1 Room 2 Room 3"<<endl;
    for(int i = 0;i< 3;i++){
        cout<<"Floor"<<i + 1<<" : ";
        for(int j = 0 ;j<3;j++){
            cout<<temperature[i][j]<<"   ";
        }
        cout<< endl;
        
    }

    //Finding the hottest Room

    double hottest = temperature[0][0];

    int hottestFloor = 0;
    int hottestRoom = 0;

    for(int i = 0 ; i<3;i++){
        for(int j = 0; j<3; j++){
            if(temperature[i][j]>hottest){
        
        hottest = temperature[i][j];
        hottestFloor = i;
        hottestRoom = j;
        }
    }
}
cout<<endl;
cout<< "Hottest Room: Floor " <<hottestFloor +1 <<", Room" <<hottestRoom + 1 <<" -> "<<hottest <<"C" <<endl ;

    //Room with highest Average
    double highestAverage = 0;
    int highestAverageFloor = 0;
    for(int i = 0; i < 3; i++){
        double sum = 0;
        for(int j = 0;j < 3; j++){
            sum = sum + temperature[i][j];
        }
        double average =  sum / 3;
        if(average >highestAverage){
            highestAverage = average;
            highestAverageFloor = i;
        }
    }

    cout<<"Hottest Floor : Floor "<<highestAverageFloor + 1 <<"(avg " << highestAverage << " c)"<<endl;

    // Counting Warnings
    int Count = 0;
     for(int i = 0;i<3; i++){
        for(int j = 0; j<3;j++){
            if(temperature[i][j]>=30){
                Count++;
            }
        }
     }

     cout<<"Room at WARNING or Above : " << Count <<endl;
return 0;

}