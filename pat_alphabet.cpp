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
void patG()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 0 || i == 6 || j == 0 || (i >= 3 && j == 7) || (i == 3 && j >= 4))
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patH()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (j == 7 || i == 3 || j == 0)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patI()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 8; j++)
        {
            if (i == 0 || i == 6 || j == 4)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patJ()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 8; j++)
        {
            if (i == 0 || j == 4 || (i == 6 && j <= 4) || (j == 0 && i >= 5))
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patK()
{
    int i, j;
    for (i = 0; i <= 8; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (j == 0 || i + j == 5 || i - j == 3)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patL()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 6 || j == 0)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patM()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 6; j++)
        {
            if (j == 0 || j == 6 || (i == j && i <= 3) || (i <= 3 && i + j == 6))
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patN()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (j == 0 || j == 7 || i == j)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patO()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 0 || i == 6 || j == 0 || j == 7)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patP()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 0 || i == 6 || j == 0 || j == 7)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patQ()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 0 || i == 6 || j == 0 || j == 7)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patR()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 0 || i == 6 || j == 0 || j == 7)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patS()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 0 || i == 6 || i == 3 || (j == 0 && i <= 3) || (j == 7 && i >= 3))
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patT()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 8; j++)
        {
            if (i == 0 || j == 4)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patU()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 6 || j == 0 || j == 7)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patV()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 0 || i == 6 || j == 0 || j == 7)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patW()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 0 || i == 6 || j == 0 || j == 7)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patX()
{
    int i, j;
    for (i = 0; i <= 7; i++)
    {
        for (j = 0; j <= 6; j++)
        {
            if (i == j || i + j == 6)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patY()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 0 || i == 6 || j == 0 || j == 7)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
void patZ()
{
    int i, j;
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            if (i == 0 || i == 6 || i + j == 7)
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
        else if (ch == 'g' || ch == 'G')
            patG();
        else if (ch == 'h' || ch == 'H')
            patH();
        else if (ch == 'i' || ch == 'I')
            patI();
        else if (ch == 'j' || ch == 'J')
            patJ();
        else if (ch == 'k' || ch == 'K')
            patK();
        else if (ch == 'l' || ch == 'L')
            patL();
        else if (ch == 'm' || ch == 'M')
            patM();
        else if (ch == 'n' || ch == 'N')
            patN();
        else if (ch == 'o' || ch == 'O')
            patO();
        else if (ch == 'p' || ch == 'P')
            patP();
        else if (ch == 'q' || ch == 'Q')
            patQ();
        else if (ch == 'r' || ch == 'R')
            patR();
        else if (ch == 's' || ch == 'S')
            patS();
        else if (ch == 't' || ch == 'T')
            patT();
        else if (ch == 'u' || ch == 'U')
            patU();
        else if (ch == 'v' || ch == 'V')
            patV();
        else if (ch == 'w' || ch == 'W')
            patW();
        else if (ch == 'x' || ch == 'X')
            patX();
        else if (ch == 'y' || ch == 'Y')
            patY();
        else if (ch == 'z' || ch == 'Z')
            patZ();

    } while (ch != 'Q');
    return 0;
}