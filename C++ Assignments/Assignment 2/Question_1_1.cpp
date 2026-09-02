#include<iostream>
using namespace std;

class product{
    private:
    int productId;
    string name ;
    double price;
    int quantity;

    public :
    void acceptdetails()
    {
        cout<<"Enter Product ID: ";
        cin>>productId;

        cout<<"Enter Product Name: ";
        cin>>name;

        cout<<"Enter Price: ";
        cin>>price;

        cout<<"Enter Quantity: ";
        cin>>quantity;
    }
    void displayDetails()const{
        cout << productId << "\t"
         << name << "\t"
         << price << "\t"
         << quantity << "\t"
         << totalValue() << endl;
    

    }
    double totalValue()const{
        return price*quantity;
    }
    bool isLowStock(int threshold)const{
        if(quantity<threshold){
            return true;
        }else{
            return false;
        }
    }
};
int main(){
    product products[5];
    cout << "===== ENTER PRODUCT DETAILS =====" << endl;
    for(int i = 0;i<5;i++){
        cout<<"Product "<<i+1<<endl;
        products[i].acceptdetails();

}

    cout << "===== INVENTORY REPORT =====" << endl;

    cout << "ID\tName\tPrice\tQty\tTotal Value" << endl;
    for(int i = 0; i < 5; i++)
    {
        products[i].displayDetails();
    }

    int highest = 0;

     for(int i = 1; i < 5; i++)
    {
        if(products[i].totalValue() > products[highest].totalValue())
        {
            highest = i;
        }
    }
    cout << "Highest Value Product : ";
    products[highest].displayDetails();

    int threshold;
    cout<<"Enter low stock threshold: ";
    cin>>threshold;

    cout<<"Low stock (threshold : "<<threshold<<") :"<<endl;
    bool found = false;

    for(int i = 0; i < 5; i++)
    {
        if(products[i].isLowStock(threshold))
        {
            cout << products[i].totalValue() << " -> ";
            products[i].displayDetails();
            found = true;
        }
    }

    if(found == false){
        cout<<"No products are low on stock."<<endl;
    }
    return 0;
}




