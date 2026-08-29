#include<iostream>
using namespace std;

int main(){
    double temperature;
    int statuscode;

    cout<<"Enter Temperature : ";
    cin>>temperature;

    if(temperature<0){
        statuscode = -1;
    }
    else if(temperature < 30){
        statuscode = 0;
    }
    else if(temperature < 45){
        statuscode = 1;
    }
     else if(temperature < 60){
        statuscode = 2;
    }
    else{
        statuscode = 3;
    }

    double fahreheit = (temperature * 1.8) + 32;

    cout<<"Temperature : " <<temperature <<" C /"<<fahreheit << "F"<<endl;

    cout<<"Status : " ;

    switch(statuscode){

        case - 1:
        cout <<"Status : SENSOR_ERROR" << endl;
        cout<< "Action : Sensor fault — check wiring" <<endl;
        break;

          case 0:
        cout <<"Status : NORMAL" <<endl;
        cout<< "Action : No action required" <<endl;
        break;

          case 1:
        cout <<"Status : WARNING" <<endl;
        cout<< "Action : Alert sent to supervisor" <<endl;
        break;

          case 2:
        cout <<"Status : CRITICAL" <<endl;
        cout<< "Action : Cooling system triggered" <<endl;
        break;

          case 3:
        cout <<"Status : SHUTDOWN"<<endl;
        cout<< "Action : Emergency shutdown initiated" <<endl;
        break;

    }
    cout<<"Reading : " <<(temperature>=25 ? "Above Average": "Below Average")<<endl;
    return 0;




}