#include <iostream>
using namespace std;
int f(int n)
{
    if(n<=1) return n;
    int last=f(n-1);
    int slast=f(n-2);
    return last+slast;
}

int main()
{
    int n;
    cout<<"Enter the value of n whose value in fib series you want to know:";
    cin>>n;
    cout<<"The value of f("<<n<<")is "<<f(n);
    

    return 0;
} 