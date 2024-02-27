#include<iostream>
using namespace std;
int findsum(int num){
    int sum=0;
    for(int i=0;i<num;i++){
        sum=sum+i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the value of n :-";
    cin>>n;
    cout<<findsum(n);
    return 0;
}
