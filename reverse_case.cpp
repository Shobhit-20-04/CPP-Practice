#include <iostream>
using namespace std;
int main()
{
    char ch;
    int asci;
    cout << "Enter character in any case to reverse: ";
    cin >> ch;
    asci = ch;
    if (asci >= 65 && asci <= 90)
        asci += 32;
    else if (asci >= 97 && asci <= 122)
        asci -= 32;
    ch = asci;
    cout << "Entered character after reversing character is " << ch;
    return 0;
}