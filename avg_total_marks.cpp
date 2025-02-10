#include<iostream>
using namespace std;
int main()
{
    int a,b,c,total;
    float avg;
    cout<<"Enter the marks of physics, chemistry, maths: ";
    cin>>a>>b>>c;
    total=a+b+c;
    avg=total/3.0;
    cout<<"Total marks: "<<total<<endl;
    cout<<"Average marks: "<<avg<<endl;
    return 0;
}