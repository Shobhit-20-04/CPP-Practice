#include <iostream>
using namespace std;
int main()
{
    int base, power, i = 1, ans = 1;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter power for the base: ";
    cin >> power;
    while (i <= power)
    {
        ans *= base;
        i++;
    }
    cout << "Answer for " << base << " ^ " << power << " is " << ans;
    return 0;
}