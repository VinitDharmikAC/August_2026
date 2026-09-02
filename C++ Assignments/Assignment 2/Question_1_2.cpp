#include<iostream>
using namespace std;

double reorderCost(int qty, double unitPrice){
    return qty * unitPrice;
}

double reorderCost(double qty, double unitPrice){
     return qty * unitPrice;
}

double reorderCost(int qty, double unitPrice, double taxRate){
    double cost = qty *unitPrice;
    double tax = cost * taxRate / 100;

    return cost + tax;
}

double applyDiscount(double price, double discountPercent = 10.0){
    double discount = price * discountPercent / 100;
    
    return price - discount ;
}
int main(){
    int qty ;
    double unitPrice;

    cout  << "===== REORDER COST =====" << endl;


    qty = 10;
    unitPrice =50;

    cout << "Integer Quantity Cost : " << reorderCost(qty, unitPrice) << endl;


    double fractionQty = 5.5;

    unitPrice = 100;

    cout<<"Fractional Quantity Cost :"<<reorderCost(fractionQty,unitPrice)<<endl;

    qty=10;
    unitPrice=50;

    cout<<"Cost with Tax: "  << reorderCost(qty, unitPrice, 18) << endl;

    cout<<"===========DISCOUNT==========="<<endl;

    cout<<"Default Discount :" << applyDiscount(1000) << endl;
    cout << "20% Discount : "<< applyDiscount(1000, 20) << endl;
    return 0;
}