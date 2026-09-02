#include<iostream>
using namespace std;

namespace Physics {
    double clamp(double val, double min, double max){
        if(val<min){
            return min;
        }
        else if(val>max){
            return max;

    }else {
        return val;
    }
    }

    double lerp(double a, double b, double t){
        return  a+(b-a)*t;
    }
}
namespace GameMath {
 int clamp(int val, int min, int max){
    if(val<min){
        return min;
    }else if(val > max){
        return max;
    }else{
        return val;
    }
 }
 double lerp(double a, double b, double t){
     return a + (b - a) * t;
 }

}
int main(){
    cout<<"-------Physics-------"<<endl;
    double velocity = Physics::clamp(80.0,0.0,100.0);

    cout<< "Clamped Velocity : " << velocity <<endl;
    double physicslerp = Physics::lerp(30.0,80.0,0.7);
     cout << "Physics Lerp: " << physicslerp << endl;


     cout<<"-----Game Math----"<<endl;
     
     int health = GameMath::clamp(160,0,200);
     cout<<"clamped health "<<health<<endl;
     double gamelerp =GameMath::lerp(0.0,200.0,0.55);
     cout<<"GameMath Lerp : "<<gamelerp<<endl;

     cout<<"-----Limited Namespace Scope ------"<<endl;
     {
        using namespace Physics;
        cout<<"Clamp: "<<clamp(180.0,0.0,300.0)<<endl;
        cout << "Lerp: " << lerp(50.0, 90.0, 0.7) << endl;
     }
     cout<<"Outside the block :"<<endl;

     cout<<"Gamemath clamp: "<<GameMath::clamp(150,0,200)<<endl;
     return 0;

}