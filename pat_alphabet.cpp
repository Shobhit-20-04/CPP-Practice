#include <iostream>
using namespace std;
void patA()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 0 || i == 3 || j == 0 || j == 7)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patB()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 0 || i == 3 || i == 6 || j == 0 || j == 7)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patC()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 0 || i == 6 || j == 0)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patD()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 0 || i == 6 || j == 1 || j == 7)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patE()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 0 || i == 3 || i == 6 || j == 0)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}

void patF()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 0 || i == 3 || j == 0)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
int main()
{
    char ch;

    do
    {
        cout << "Enter any character or Q to quit : ";
        cin >> ch;
        if (ch == 'a' || ch == 'A')
            patA();
        else if (ch == 'b' || ch == 'B')
            patB();
        else if (ch == 'c' || ch == 'C')
            patC();
        else if (ch == 'd' || ch == 'D')
            patD();
        else if (ch == 'e' || ch == 'E')
            patE();
        else if (ch == 'f' || ch == 'F')
            patF();

    } while (ch != 'Q');
    return 0;
}