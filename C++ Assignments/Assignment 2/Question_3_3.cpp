#include<iostream>
using namespace std;
int main(){

    int rows, cols;

    cout<<"Enter the number of Rows:";
    cin>>rows;
    cout<<"Enter the number of Columns:";
    cin>>cols;

    int** gameMap=new int*[rows];
     for(int i = 0; i < rows; i++)
    {
        gameMap[i] = new int[cols];
    }

    cout<<"Enter title values "<<endl;
    for(int i =0;i<rows;i++){
        for(int j = 0; j<cols;j++){
            cin>> gameMap[i][j];
        }
    }
    cout<<"----------Game Map---("<<rows<< " * " <<cols<< ")-------"<<endl;
    for(int i =0;i<rows;i++){
        for(int j =0;j<cols;j++){
            cout<<gameMap[i][j]<< " ";
        }
        cout<<endl;
    }


    cout << "Legend: 0=Grass  1=Water  2=Mountain  3=Forest  4=Dungeon" << endl;
    int grass = 0;
    int water = 0;
    int mountain = 0;
    int forest = 0;
    int dungeon = 0;


    for(int i =0;i<rows;i++){
         for(int j =0;j<cols;j++){
        if(gameMap[i][j]==0){
            grass++;
        }
        else if(gameMap[i][j]==1){
            water++;
        }
        else if(gameMap[i][j]==2){
            mountain++;
        }
        else if(gameMap[i][j]==3){
            forest++;
        }
                else if(gameMap[i][j]==4){
            dungeon++;
        }
    }
}

cout << "Tile Count:" << endl;
cout << "Grass : " << grass << endl;
cout << "Water : " << water << endl;
cout << "Mountain : " << mountain << endl;
cout << "Forest : " << forest << endl;
cout << "Dungeon : " << dungeon << endl;

for(int i = 0; i < rows; i++)
{
    delete[] gameMap[i];
}

delete[] gameMap;

return 0;
}