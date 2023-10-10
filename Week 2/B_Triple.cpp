#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        int cnt[n+1]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            cnt[a[i]]++;
        }
        int x=-1;
        for(int i=1;i<=n;i++){
            if(cnt[i]>=3){
                x=i;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}