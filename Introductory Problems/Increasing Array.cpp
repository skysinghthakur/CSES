#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i: arr){
        cin>>i;
    }
    int prev=arr.front();
    long long res=0;
    for(auto &i: arr){
        if(i<prev)
            res+=(long long)(prev-i);
        prev = max(prev,i);
    }
    cout<<res;
    return 0;
}
