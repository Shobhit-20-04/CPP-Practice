#include <iostream>
using namespace std;
int main()
{
    int start, stop;
    cout << "Enter start number: ";
    cin >> start;
    cout << "Enter end number: ";
    cin >> stop;
    while (start <= stop)
    {
        cout << start << " ";
        start++;
    }
    return 0;
}