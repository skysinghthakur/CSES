#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int res=1,ans=1;
    for(int i=1;i<(int)s.length();i++){
        s[i]==s[i-1] ? ans+=1 : ans = 1;
        res = max(res,ans);
    }
    cout<<res;
    return 0;
}
