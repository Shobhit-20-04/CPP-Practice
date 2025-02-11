#include <iostream>
using namespace std;
int main()
{
    int rate, qty;
    float dis, total;
    cout << "Enter rate of product: ";
    cin >> rate;
    cout << "Enter qty of prdouct: ";
    cin >> qty;
    cout << "Enter discount of product in percent: ";
    cin >> dis;
    total = rate * qty - (rate * qty * dis / 100);
    cout << "Final billing amount of the product: " << total;
    return 0;
}