#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll N,M,X;

void solution()
{
     vector <ll> a,b,c,d;
     // inputing N and m
     cin >> N >> M;
     
     if(N == 1 || M == 1)
     {
         for(ll i=1; i<=N; i++)
             for(ll j=1; j<=M; j++)
             {
                 cin >> X;
                 a.push_back(X);
             }
             
             for(ll i=1; i<=N; i++)
                for(ll j=1; j<=M; j++)
                 {
                     cin >> X;
                     b.push_back(X);
                 }
                 
                 if(a != b)
                     cout<<"NO"<<"\n";
                 else
                     cout<<"YES"<<"\n";
                return;
                
     }
     
            for(ll i=1;i<=N;i++)
                for(ll j=1;j<=M;j++)
                 {
                     cin >> X;
                     
                     if((i^j)%2 == 1)  
                     //not divisible by 2
                     a.push_back(X);
                     else
                     b.push_back(X);
                 }
                 
                 
            for(ll i=1;i<=N;i++)
                for(ll j=1;j<=M;j++)
                 {
                     cin >> X;
                     if((i^j)%2 == 1) 
                     //not divisible by 2
                     c.push_back(X);
                     else
                     d.push_back(X);
                 }
             
             // Sorting vectors a,b,c,d    
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        sort(d.begin(),d.end());
        
        if(a != c && b != d)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
}
   

signed main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int Testcase;
    cin>>Testcase;
    while(Testcase--)
        solution();
}
