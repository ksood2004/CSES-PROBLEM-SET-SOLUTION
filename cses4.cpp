#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        int sum=0;
        if(a[i]<a[i-1]){
            sum=sum+(a[i-1]-a[i]);
            a[i]=a[i-1];
            }
        else{
            break;
        }
         return sum;
    }
    
    return 0;
}