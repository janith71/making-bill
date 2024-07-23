#include <iostream>
#include <string>
using namespace std;

 void calculateItemCost();
 void inputItemDetails();
 void displayBill();
 


double calculateItemCost(int quantity,double price) {
   
   return quantity*price ;
}


void inputItemDetails(string& itemName, int& quantity, double& price) {
   
   cout << "Enter item name : ";
   cin>>itemName;
   cout << "Enter quantity : ";
   cin >> quantity;
   cout << "Enter price per unit : ";
   cin >> price;
}


void displayBill(const string& itemName, int quantity, double price, double itemCost) {

   cout<<"                   "<< itemName << "       " << quantity<<"      " << price <<"       "<< itemCost << endl;

}

int main() {
   int numItems;
   double totalBill = 0;

   cout << "Enter the number of items: ";
   cin >> numItems;
   cout <<"Enter details for each item : "<<endl;

   for (int i = 1; i <= numItems; ++i) {
       string itemName;
       int quantity;
       double price, itemCost;

       
       inputItemDetails(itemName, quantity, price);

       
       itemCost = calculateItemCost(quantity, price);

       
       displayBill(itemName, quantity, price, itemCost);

       totalBill += itemCost;
   }

   
   cout << "                                 Total Bill: " << totalBill << endl;

   return 0;
}
