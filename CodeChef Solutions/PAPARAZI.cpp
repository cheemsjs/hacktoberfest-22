/* LINK - https://www.codechef.com/MARCH21C/problems/PAPARAZI */

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<pair<int,int>> p,st;
        for(int i=0; i<n; ++i) {
            int v;
            cin >> v;
            p.push_back({i+1, v});
        }

        if(n==2) {
            cout << 1 << endl;
            continue;
        }

        st.push_back(p[0]);
        st.push_back(p[1]);
        int ans=1, lenght=st.size();
        for(int i=2; i<n; ++i) {
            while(st.size() >= 2) {
                  double s1 = ((double)st[lenght-1].second - (double)st[lenght-2].second)/((double)st[lenght-1].first -(double)st[lenght-2].first);
                  double s2 = ((double)p[i].second - (double)st[lenght-1].second)/((double)p[i].first - (double)st[lenght-1].first);
                  if(s1 <= s2) {
                    st.pop_back();
                    lenght--;
                  }
                  else
                    break;
            }
            st.push_back(p[i]);
            lenght++;

            ans = max(ans, st[lenght-1].first - st[lenght-2].first);
        }
        cout << ans << endl;
    }
}