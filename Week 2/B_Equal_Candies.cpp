#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        long long sum=0;
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<mn){
                mn=a[i];
            }
        }
        for(int i=0;i<n;i++){
            sum+=(a[i]-mn);
        }
        cout<<sum<<endl;
    }
    return 0;
}