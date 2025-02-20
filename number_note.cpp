#include <iostream>
using namespace std;
int main()
{
    int note, amount;
    cout << "Enter Amount: ";
    cin >> amount;
    note = amount / 2000;
    amount = amount % 2000;
    cout << endl
         << "Number of 2000 rupees notes=" << note;
    note = amount / 500;
    amount = amount % 500;
    cout << endl
         << "Number of 500 rupees notes=" << note;
    note = amount / 200;
    amount = amount % 200;
    cout << endl
         << "Number of 200 rupees notes=" << note;
    note = amount / 100;
    amount = amount % 100;
    cout << endl
         << "Number of 100 rupees notes=" << note;
    note = amount / 50;
    amount = amount % 50;
    cout << endl
         << "Number of 50 rupees notes=" << note;
    note = amount / 20;
    amount = amount % 20;
    cout << endl
         << "Number of 20 rupees notes=" << note;
    note = amount / 10;
    amount = amount % 10;
    cout << endl
         << "Number of 10 rupees notes=" << note;
    note = amount / 5;
    amount = amount % 5;
    cout << endl
         << "Number of 5 rupees notes=" << note;
    note = amount / 1;
    amount = amount % 1;
    cout << endl
         << "Number of 1 rupee notes=" << note;
    return 0;
}