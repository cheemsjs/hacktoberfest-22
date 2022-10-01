#include<bits/stdc++.h>
using namespace std;

void file_i_o() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("Input.txt","r",stdin);
    freopen("Output.txt","w",stdout);
  #endif
}

int main(int argc, char** argv) {   
  file_i_o();
  //write your code here Als
  int N;
  cin>>N;
  vector<int>height(N);
  
  for(int i=0; i<N; i++) 
    cin>>height[i];

  vector<int>dp(N, 1e9+7);
  // Base case
  dp[0] = 0;

  for(int i=0; i<N; i++) {
    if(i+1 < N) 
      dp[i+1] = min(dp[i+1], dp[i] + abs(height[i] - height[i+1]));

    if(i+2 < N)
      dp[i+2] = min(dp[i+2], dp[i] + abs(height[i] - height[i+2]));  
  }
  cout<<dp[N-1];
  return 0;
}