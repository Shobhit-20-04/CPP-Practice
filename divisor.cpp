#include <iostream>
using namespace std;
int main()
{
    int num, var = 1;
    cout << "Enter any number: ";
    cin >> num;
    cout << "The divisors are: ";
    while (var <= num)
    {
        if (num % var == 0)
            cout << var << " ";
        var++;
    }
    return 0;
}