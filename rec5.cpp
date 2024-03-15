#include <iostream>
using namespace std;

//Function to reverse an array 
void rev(int i,int arr[],int n)
{
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    rev(i+1,arr,n);
}

int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rev(0,arr,n);
    cout << "Reversed array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}