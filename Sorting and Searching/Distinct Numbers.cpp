#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<int> res;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        res.insert(val);
    }
    cout<<res.size();
    return 0;
}
