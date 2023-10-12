#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q; cin>>q;
    long long pre[n];
    pre[0]=a[0];
    for(int i=1;i<n;i++){
        pre[i]=a[i]+pre[i-1];
    }
    while(q--){
        int i,j; cin>>i>>j;
        long long sum;
        if(i==0){
            sum=pre[j];
        }
        else{
            sum=pre[j]-pre[i-1];
        }
        cout<<sum<<endl;
    }
    return 0;
}