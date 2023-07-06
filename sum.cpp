#include<iostream>
using namespace std;

int sum(int *a,int n){
    if(n==0)
    return 0;
    if(n==1)
 return a[0];

    int remsum=sum(a+1,n-1);
    int sum1=a[0]+remsum;
    return sum1;

}

int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = sum(a,n);

    cout<<"sum is: "<<ans<<endl;
    }