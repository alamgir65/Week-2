#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> dir={{-1,-1},{-1,1},{1,-1},{1,1}};
bool isValid(int i,int j){
    return (i>=0 && i<8 && j>=0 && j<8);
}
int main()
{   
    int t; cin>>t;
    while(t--){
        char a[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>a[i][j];
            }
        }
        int p,q;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(a[i][j]=='#'){
                    bool flag=true;
                    for(auto d:dir){
                        int ni=i+d.first;
                        int nj=j+d.second;
                        if(isValid(ni,nj) && a[ni][nj]=='#'){
                            continue;
                        }
                        else{
                            flag=false;
                        }
                    }
                    if(flag) p=i+1,q=j+1;
                }
            }
        }
        cout<<p<<" "<<q<<endl;
    }
    return 0;
}