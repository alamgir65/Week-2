#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        a.push_back(x);
    }
    b=a;
    sort(a.begin(),a.end());
    long long pre_or[n];
    long long pre_so[n];
    pre_or[0]=b[0];
    for(int i=1;i<n;i++){
        pre_or[i]=pre_or[i-1]+b[i];
    }
    pre_so[0]=a[0];
    for(int i=1;i<n;i++){
        pre_so[i]=pre_so[i-1]+a[i];
    }
    int q; cin>>q;
    while(q--){
        int type,l,r;
        cin>>type>>l>>r;
        l--;
        r--;
        long long sum=0;
        if(type==1){
            if(l==0){
                sum=pre_or[r];
            }
            else{
                sum=pre_or[r]-pre_or[l-1];
            }
        }
        else{
            if(l==0){
                sum=pre_so[r];
            }
            else{
                sum=pre_so[r]-pre_so[l-1];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}