#include <iostream>
using namespace std;
int main()
{
    float l, b, area, perimeter;
    cout << "Enter Length=";
    cin >> l;
    cout << "Enter Breadth=";
    cin >> b;
    perimeter = 2 * (l + b);
    area = l * b;
    cout << "Perimeter of the rectangle: " << perimeter << " units" << endl;
    cout << "Area of the rectangle: " << area << " sq. units";
    return 0;
}