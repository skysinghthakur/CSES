#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    long long res=A[0],ans=0;
    for(int i=0;i<n;i++){
        if(ans+A[i]>0)
            ans+=A[i];
        else
            ans=A[i];
        res=max(res,ans);
        ans=max((long long)0,ans);
    }
    cout<<res;
    return 0;
}
