#include <bits/stdc++.h>
using namespace std;
using ll=long long;


void solve(){
    int n;cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)cin>>v[i];
    int ans=0;
    for(int i=1;i<n;i++){
        if(v[i-1]<v[i]){
            continue;
        }
        int j=i;
        while(v[j-1]>=v[j]){
            j++;
            if(j==n){
                break;
            }
        }
        int ele=j-i;
        if()
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;cin>>t;
    while(t--){
        solve();
    }
}