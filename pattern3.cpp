#include <iostream>
using namespace std;

/* Pattern 3
    1 
    1 2 
    1 2 3 
    1 2 3 4 
    1 2 3 4 5 */

int main()
{
   int n;
   cout<<"Enter the value of n:";
   cin>>n;
   cout<<"The pattern will look liek this:"<<"\n";
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=i;j++)
       {
           cout<<j<<" ";
       }
       cout<<endl;
   }

    return 0;
}