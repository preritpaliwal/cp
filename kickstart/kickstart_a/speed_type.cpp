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
int main()
{
    fast
    int t; cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        ll a = 0,b = 0;
        while(a<s1.size() && b<s2.size()){
            if(s1[a]==s2[b]){
                a++;
                b++;
                continue;
            }
            b++;
        }
        if(a==s1.size()){
            cout<<s2.size()-a<<endl;
        }
        else{
            cout<<"IMPOSSIBLE\n";
        }
    }
    return 0;
}