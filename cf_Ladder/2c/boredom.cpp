// link to ques : https://codeforces.com/problemset/problem/455/A

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define fo(i,a,n) for(ll i=a;i<n;i++)
#define fo0(i,n) for(ll i=0;i<n;i++)
#define fom(i,a,n) for(ll i=n;i>=a;i--)
#define pb push_back
#define mp make_pair
#define vll vector<ll> 
#define vvll vector<vector<ll>> 
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
int main()
{
    fast
    ll n;
    cin>>n;
    ll size = 100000;
    vll v(size,0);
    ll a;
    fo0(i,n){
        cin>>a;
        v[a-1]++;
    }
    ll dp0 = v[0];
    ll dp1 = max(v[0],2*v[1]);
    fo(i,2,size){
        v[i] = max(dp1,dp0+v[i]*(i+1));
        dp0 = dp1;
        dp1 = v[i];
    }
    cout<<dp1;
    return 0;
}