#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool vis[n+1];
    memset(vis,true,sizeof vis);
    for(int i=1;i<n;i++){
        int val;
        cin>>val;
        vis[val] = false;
    }
    for(int i=1;i<=n;i++){
        if(vis[i]){
            cout<<i;
            return 0;
        }
    }
    return 0;
}
