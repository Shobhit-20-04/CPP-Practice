#include <iostream>
using namespace std;
int main()
{
    int fine, days;
    cout << "Enter number of days for which the book got issued: ";
    cin >> days;
    if (days <= 10)
        fine = 0;
    else if (days <= 15)
        fine = (days - 10) * 1;
    else if (days <= 20)
        fine = (days - 15) * 2 + 5;
    else if (days <= 25)
        fine = (days - 20) * 5 + 15;
    else
        fine = (days - 25) * 10 + 40;
    cout << "Total Fine is " << fine;
    return 0;
}