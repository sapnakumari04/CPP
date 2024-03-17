#include <iostream>
using namespace std;

/* Pattern 7
    A 
    A B 
    A B C 
    A B C D 
    A B C D E */

int main()
{
   int n;
   cout<<"Enter the value of n:";
   cin>>n;
   cout<<"The pattern will look liek this:"<<"\n";
   int num=1;
   
   for(int i=0;i<=n;i++)
   {
       for(char ch='A';ch<='A'+i;ch++)
       {
           cout<<ch<<" ";
       }
       cout<<endl;
   }

    return 0;
}