#include <iostream>
using namespace std;

//Function to calculate the summation of n number 
int sum(int n)
{
    if(n==0) return 0;
    return n+sum(n-1);
    
}

int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    cout<<sum(n);
}
