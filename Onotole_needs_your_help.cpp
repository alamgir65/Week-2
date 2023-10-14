#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int a[n];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    int x;
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second == 1){
            x=it->first;
            break;
        }
    }
    cout<<x<<endl;
    return 0;
}