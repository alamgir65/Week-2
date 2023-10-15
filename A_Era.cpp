#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{   
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll a[n+3];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        ll ans=0;
        ans=a[1]-1;
        ll idx=ans;
        for(int i=2;i<=n;i++){
            if(a[i] > (i+idx)){
                ll x=a[i]-(i+idx);
                ans+= x;
                idx+=x;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}