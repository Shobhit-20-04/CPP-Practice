#include <iostream>
using namespace std;
int main()
{
    float x = 2.2;
    if (x == 2.2f)
        cout << "Converted to float from double";
    else
        cout << "Stayed as the datatype double";
    return 0;
}