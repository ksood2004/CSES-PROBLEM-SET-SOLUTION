#include<iostream>
using namespace std;
int main(){
    long long int n,sum=0;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];

    }
    long long int suuum=n*(n+1)/2;
    long long int result=suuum-sum;
    cout<<result;
    return 0;
}