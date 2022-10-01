/* LINK - https://www.codechef.com/APRIL21B/problems/SDICE */

#include<bits/stdc++.h>
using namespace std;

int INF = 1000000005;
long long INFF = 1000000000000000005LL;
#define sqr(x) ((ll)(x) * (x))
#define watch(x) cout<<#x<<" : "<<x<<endl
#define all(x) x.begin(), x.end()
#define len(v) v.size()
#define srt(v) sort( v.begin(), v.end())
#define rsrt(v) sort( v.rbegin(), v.rend())
#define rvrs(v) reverse( v.begin(), v.end())
#define rep(i, a, n) for(long long i = a; i < n; i++)
#define rep0(i, n) for(long long i = 0; i < n; i++)
#define rep1(i, n) for(long long i = 1; i <= n; i++)
#define repn(i, n) for(long long i = n-1;i >= 0;i--)
#define pb push_back
#define out(x) cout<<x<<"\n";
#define endl "\n"
#define outs(x) cout<<x<<" "
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
typedef long long ll;
typedef pair<long long, long long> pl;
typedef pair<long long, pl> ppl;
typedef vector<long long> vl;
typedef vector<vector<long long>> vvl;
typedef vector<pair<long long, long long>> vll;
typedef vector<ppl> vlll;
typedef vector<string> vs;

int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll ans;
        if(n==1){
            out(20);
        }
        else if(n==2){
            out(36);
        }
        else if(n==3){
            out(51);
        }
        else if(n==4){
            out(60);
        }
        else{
            ll x,y;
            y = n%4;
            x = (n-y)/4;
            ans = 44*x;
            if(y==0)
                ans += 16;
            else if(y==1)
                ans += 32;
            else if(y==2)
                ans += 44;
            else if(y==3)
                ans += 55;
            out(ans);
        }
    }
    return 0;
}