#include <iostream>
using namespace std;

struct Purchase{
    int invoice_num, sale_amount;
    double sales_tax;
};

int main()
{
    Purchase purchase;
    cout << "Enter invoice number between 1000 - 8000 : ";
    cin >> purchase.invoice_num;
    while(purchase.invoice_num < 1000 || purchase.invoice_num > 8000){
        cout << "Invoice number should be between 1000 - 8000. Enter invoice number again : ";
        cin >> purchase.invoice_num;
    }
    cout << "Enter amount of sale : ";
    cin >> purchase.sale_amount;
    while(purchase.sale_amount < 0){
        cout << "Please enter a non-negatice number for amount of sale : ";
        cin >> purchase.sale_amount;
    }
    double purchase_price;
    cout << "Enter the purchase price : ";
    cin >> purchase_price;
    purchase.sales_tax = 0.05 * purchase_price;
    cout << "Invoice number : " << purchase.invoice_num << endl; 
    cout << "Amount of sale : " << purchase.sale_amount << endl; 
    cout << "Amount of sales tax : " << purchase.sales_tax << endl;
   return 0;
}