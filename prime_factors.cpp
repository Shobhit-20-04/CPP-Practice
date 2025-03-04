#include <iostream>
using namespace std;
int main()
{
    int num, i = 2;
    cout << "Enter your number for prime factors: ";
    cin >> num;
    while (i <= num)
    {
        if (num % i == 0)
        {
            cout << i << " ";
            num = num / i;
        }
        else
        {
            num /= i;
            i++;
        }
    }
    return 0;
}