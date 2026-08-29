#include<iostream>
using namespace std;

int main(int argc,char* argv[]){
    if(argc < 4)
    {
        cout<<"Usage    : ./sensor_monitor" <<endl;
        cout<<"Error    : Missing arguments." <<endl;
        return 1;
    }
    int warnThreshold = 0;
    int criticalThreshold = 0;
    int numReadings = 0;

    //converting argv[1] to integer
    for(int  i = 0; i < 2 ; i++){
        warnThreshold = warnThreshold * 10 + (argv[1][i] - '0');
        criticalThreshold = criticalThreshold * 10 + (argv[2][i] - '0');

    }
    for (int i = 0; i<2 ; i++){
        numReadings = numReadings * 10 +(argv[3][i] - '0');
    }
    if(warnThreshold >= criticalThreshold){
        cout<<"Error : warning threshold must be less than critical threshold."<<endl;
        return 1;
    }

    if(numReadings< 1 || numReadings >500){
        cout<<"Error : Number of readings must be between 1 and 500."<<endl;
        return 1;
    }
  cout<<"Config  : Warn="<<warnThreshold<<"°C  Critical="<<criticalThreshold<<"°C  Readings="<<numReadings<<endl;

    int normalCount = 0;
    int warningCount = 0;
    int criticalCount = 0;
    int shutdownCount = 0;
    
    for(int i = 0; i <numReadings; i ++){
        int temperature = rand() % 70;

        if(temperature <warnThreshold){
            normalCount++;
        }
        else if(temperature < criticalThreshold){
            warningCount++;
        }
        else if (temperature < 60)
        {
            criticalCount++;
        }
        else{
        shutdownCount++;
    }
}   

cout<<"Results : Normal:"<<normalCount
    <<"  Warning:"<<warningCount
    <<"  Critical:"<<criticalCount
    <<"  Shutdown:"<<shutdownCount<<endl;
return 0;
}


