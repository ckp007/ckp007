#include <iostream>

using namespace std;

int main()
{ 
    char name[20],add[200];
    int ca_no, unit ;
    int number;
    int final_amount;

    cout << "enter your name: ";
    gets(name);
    cout << "enter your mobile number: ";
    cin>>number;
    cout << "enter your billing address: ";
    cin >> add;
    cout << "enter your ca number: ";
    cin >> ca_no;
    cout << "enter total number of unit consumed: ";
    cin >> unit;

    cout << "\t\t\t\t\t\t BILL DETAILS [BSES] " << endl;
    cout << "\t\t\t\t\t\t______________________\n\n";
    cout << "NAME: " << name ;
    cout << "\t\t NUMBER: " << number << endl;
    cout << "BILLING ADDRESS: " << add;
    cout << "\t\t CA NUMBER: " << ca_no << endl;
    cout << "UNIT CONSUMED: " << unit << endl;
    // cout<<"subsidy fro"

    if (unit >= 0 && unit <= 200)
    {
        unit = unit * 5;
        cout << "YOUR AMOUNT IS: " << unit << endl;
    }
    else if (unit >= 201 && unit <= 400)
    {
        unit = (200*5) + (unit-200)*6.5;
        cout << "YOUR AMOUNT IS: " << unit << endl;
    }
    else if (unit >= 401 && unit <= 600)
    {
        unit = (200*5)+(200*6.5)+(unit-400)*8.5;
        cout << "YOUR AMOUNT IS: " << unit << endl;
    }
    else if (unit >= 601 && unit<=800)
    {
        unit = (200*5)+(200*6.5)+(200*8.5)+(unit-600)*10;
        cout << "YOUR AMOUNT IS: " << unit << endl;
    }
    else if (unit >= 800)
    {
        unit = (200*5)+(200*6.5)+(200*8.5)+(200*10)+(unit-800)*12;
        cout << "YOUR AMOUNT IS: " << unit << endl;
    }
    cout << "TOTAL SUBSIDY FROM GOVERMENT 200 OFF ON BILL AMOUNT" << endl;
    final_amount = unit - 200;
    cout << "FINAL AMOUNT: " <<final_amount<<endl;

        
        // return 0;
}