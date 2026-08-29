#include<iostream>
#include<cmath>
using namespace std;

// Finding the distance between two points
inline double distanceBetween(double x1 , double y1,
                                double x2, double y2)
                                {
                                    return sqrt(pow(x2 - x1 , 2) + pow(y2 - y1,2));

                                }

 // convert degree to radian
 inline double toRadians(double degree){
    return degree * (M_PI / 180);
 }

 //Keeping value within the given range
 inline double clamp(double value,double minVal ,double maxVal) 
 {
    if(value<minVal)
    {
        return minVal;
    }
    else if(value>maxVal)
    {
        return maxVal;
    }
    return value;
 }

 //checking whether point is inside safe zone
 inline bool isInSafeZone(double x ,double y , double cx ,double cy ,double radius ){
    double distance  =  distanceBetween(x,y,cx,cy);
    if(distance <= radius)
    {
        return true;
    }
    return false;
 }

 int main(){
    double homeX = 0.0;
    double homeY = 0.0;

    double radius = 50.0;

    //three waypoints 
    double waypointX[3] = {30.0 , 60.0 , -10.0};
    double waypointY[3] = {40.0, 20.0 , -20.0 };
    cout<<"Home Position : ("<<homeX<< ", " <<homeY <<" )" <<endl;

    cout<<"Safe Zone Radius : " <<radius << endl ;
    cout<<endl;

    for(int i = 0; i< 3 ; i++){
        double distance = distanceBetween(
            homeX, homeY,
            waypointX[i], waypointY[i]

        );

        bool safe = isInSafeZone(
            waypointX[i],
            waypointY[i],
            homeX,
            homeY,
            radius
        );
        
        cout<<"Waypoint " << i + 1 << ": ( " << waypointX[i]<<" ,"<<waypointY[i]<<")"<<endl;
        cout<<"Distance from Home : " << distance << endl;

        if(safe){
            cout<<"Safe Zone : Inside "<<endl;

        }
        else{
         cout<<"Safe Zone : Outside " <<endl;

        }

        cout<< endl;



    }


    cout<< "90 degree in radius : " <<toRadians(90)<< endl;

    cout<<"Clamped Value : " <<clamp(75,0,50)<<endl;

    return 0;


 }

