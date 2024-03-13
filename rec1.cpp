//CPP Program to print name N times
#include <iostream>
using namespace std;

void f(int i, int n) 
{
    if(i > n)
        return;
    cout << "Sap" << endl; 
    f(i + 1, n);
}

int main()
{
    int n ;
    cout<<"Enter the value of n :"<<"\n";
    cin>>n;
    f(1, n);
    return 0; 
}

