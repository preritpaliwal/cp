#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define fo(i,a,n) for(ll i=a;i<n;i++)
#define fo0(i,n) for(ll i=0;i<n;i++)
#define fom(i,a,n) for(ll i=n;i>=a;i--)
#define pb push_back
#define mp make_pair
#define vll vector<ll> 
#define qll queue<ll>
#define qpll queue<pair<ll,ll>>
#define vpll vector<pair<ll,ll>>
#define vvll vector<vector<ll>> 
#define pq priority_queue
#define F first
#define S second
#define mod 1000000007
#define INF 1e18
using namespace std;
void print(vll v){
    fo0(i,v.size()){cout<<v[i]<<" ";}
    cout<<endl;}

ll fights(ll n,ll m,bool faisal){
    if(n<0){
        return 1;
    }
    if(m<0){
        return 1;
    }
    if(faisal){
        return 1 + fights(n-1,m,false);
    }
    else{
        return fights(n-1,m,false) + fights(n,m-1,true);
    }
}



int main()
{
    fast
    int t; cin>>t;
    while(t--){
        ll n,m;
        cin>>m>>n;
        bool faisal = false;
        cout<<fights(n,m,faisal)<<endl;
    }
    return 0;
}