#include <iostream>

using namespace std;

int main()
{ string customerName;
  string itemsBeingsold;
  double vat;
  string attendantsName;
  int ID;
  int price;
  string itemTobuy;
  double quantityTobuy;
  double totalCost,totalAmount;
  double vatAmount;
  double balance;





    cout << "please enter customer's name" << endl;
    cin >> customerName;
    cout << "items being sold(1. printer, 2. phone, 3. table)" << endl;
     vat = 0.12;
    cout << " please enter attendant's name" << endl;
    cin >> attendantsName;
    cout << " please enter your ID" << endl;
    cin >> ID;
    cout << "printer = &600 " << endl;
    cout << "phone = &500 " << endl;
    cout << " table = &50" << endl;

    double printerprice = 600;
    double phoneprice = 500;
    double tableprice = 50;

    double item_A, item_B, item_C;
    cout << " please how many printers will you buy else input 0" << endl;
    cin >> item_A;
    cout << " please how many phones will be you buy else input 0" << endl;
    cin >> item_B;
    cout << " please how many tables will you buy else input 0"<< endl;
    cin >> item_C;

       totalCost = ((printerprice * item_A)+(phoneprice * item_B)+(tableprice * item_C));
       vatAmount = totalCost*vat;
       totalAmount = ((totalCost*vat)+totalCost);

       cout << "RECEIPT" <<endl;
       cout << "Customer Name: "<<customerName<<endl;
       cout << "Unique ID: "<<ID<<endl;
       cout << "Attendants Name: "<<attendantsName<<endl;
       cout << "Printers bought = "<<item_A<<endl;
       cout << "Phones bought = "<<item_B<<endl;
       cout << "Tables bought = "<<item_C<<endl;
       cout << "Total cost: $"<<totalCost<<endl;
       cout << "Vat Amount: $"<<vatAmount<<endl;
       cout << "Total Amount: $"<<totalAmount<<endl;












    return 0;
}
