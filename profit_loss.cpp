#include <iostream>
using namespace std;
int main()
{
    int purchase, sales;
    cout << "Enter Purchase rate: ";
    cin >> purchase;
    cout << "Enter Sales rate: ";
    cin >> sales;
    if (sales > purchase)
        cout << "Profit is " << sales - purchase;
    else
        cout << "Loss is " << purchase - sales;
    return 0;
}