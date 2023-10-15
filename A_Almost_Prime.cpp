#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n==2) return true;
    else if(n<2 || n%2==0) return false;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{   
    int n; cin>>n;
    vector<bool> v(n+1,false);
    v[2]=true;
    for(int i=3;i<=n;i+=2){
        if(isPrime(i)){
            v[i]=true;
        }
    }
    int ans=0,cnt=0;
    for(int i=6;i<=n;i++){
        cnt=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0 && v[j]){
                cnt++;
            }
            if(cnt>2) break;
        }
        if(cnt==2) ans++;
    }
    cout<<ans<<endl;
    return 0;
}