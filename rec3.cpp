#include <iostream>
using namespace std;

//Function to calculate the factorial of n
int fact(int n)
{
    if(n==0) return 1;
    return n*fact(n-1);
    
}

int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<fact(n);
}