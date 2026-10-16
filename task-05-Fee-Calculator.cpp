//Roll no. : L1F26BSCS0297 
//Name :  Hassan Ali 
// Task-05 (Fee-Calculator)

#include <iostream>
using namespace std;

int main()
{
    int age=0, creditHours=0, feePerCreditHour=0;
    cout<<"Enter your Age:"<<endl;
    cin>>age;
    cout<<"Enter your Credit hours:"<<endl;
    cin>>creditHours;
    cout<<"Enter fee Per Credit Hour:"<<endl;
    cin>>feePerCreditHour;
    int total = creditHours*feePerCreditHour;
    int totalafterdiscount = total - 2000;
    cout<<"\nYour total fee was : "<<total<<endl;
    cout<<"\nAfter Discount Your total fee is now : "<<totalafterdiscount<<endl;
    return 0;
}

/*
Q no. 1)__ when i enter  all three inputs with space of tab among them the program 
 not say or ask for other inputs because it automatically undrstand that the inputs
*/


/*
Q no. 2)__ when i entr the input 9.8 it starts giving error because we take variable with data type int
but the input was float therefor the programmme starts giving error.*/