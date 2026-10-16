//Roll no. : L1F26BSCS0297 
//Name :  Hassan Ali 
// Task-06 (BookShop)

#include <iostream>
using namespace std;

int main() 
{
    int price, quantity;

    cout<<"Enter the Quantity of Product\n";
    cin>>quantity;
    cout<<"Enter the Price of Product\n";
    cin>>price;

    int total = price*quantity;
    int tax = total*5/100;

    int grandtotal = total + tax;

    cout<<"\nTotal Bill is: "<<total<<" Rs";
    cout<<"\nTotal Tax is: "<<tax<<" Rs";
    cout<<"\nSO, YOUR Grand Total is: "<<grandtotal<<" Rs";
    

return 0;
}