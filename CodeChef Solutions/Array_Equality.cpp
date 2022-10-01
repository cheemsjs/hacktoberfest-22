#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    map<int,int> mp;
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(auto &it:v) cin>>it;
	    for(auto it:v) mp[it]++;
	    int flag=0;
	    for(auto it:mp){
	        if(it.second>(n+1)/2){
	            cout<<"No\n";
	            flag=1;
	            break;
	        }
	    }
	    if(!flag) cout<<"Yes\n";
	}
	return 0;
}