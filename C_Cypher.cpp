#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> v;
        for(int i=0;i<n;i++){
            int m; cin>>m;
            string s;
            cin>>s;
            int x=a[i];
            for(int i=0;i<m;i++){
                if(s[i]=='D'){
                    if(x==9){
                        x=0;
                    }
                    else{
                        x++;
                    }
                }
                else{
                    if(x==0){
                        x=9;
                    }
                    else{
                        x--;
                    }
                }
            }
            v.push_back(x);
        }
        for(int val:v){
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}