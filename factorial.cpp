#include <iostream>
using namespace std;
int main()
{
    int num, i = 1, facto = 1;
    cout << "Enter any number for factorial: ";
    cin >> num;
    while (i <= num)
    {
        facto *= i;
        i++;
    }
    cout << "Factorial is " << facto;
    return 0;
}