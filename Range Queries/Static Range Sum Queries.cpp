#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    long long res[n+1];
    int val;
    res[0] = 0;
    for(int i=1;i<=n;i++)
        cin>>val, res[i]=res[i-1]+val;
    while(q--){
        int a,b;
        cin>>a>>b;
        cout<<res[b]-res[a-1]<<"\n";
    }
    return 0;
}

