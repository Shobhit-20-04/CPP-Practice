#include <iostream>
using namespace std;
int main()
{
    int num, total = 0;
    cout << "Enter any number:";
    cin >> num;
    while (num > 0)
    {
        total += num % 10;
        num = num / 10;
    }
    cout << "Sum of digits in number: " << total;
    return 0;
}