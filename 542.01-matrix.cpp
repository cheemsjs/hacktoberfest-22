/*
 * @lc app=leetcode id=542 lang=cpp
 *
 * [542] 01 Matrix
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> vis(n, vector<int>(m,0));
        vector<vector<int>> dis(n, vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(!mat[i][j]) {
                    vis[i][j]=1;
                    q.push({{i,j},0});
                }
            }
        }

        int delRow[]={-1,0,1,0};
        int delCol[]={0,1,0,-1};
        while(!q.empty()) {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int steps=q.front().second;
            q.pop();

            dis[r][c]=steps;
            for(int i=0;i<4;i++)
            {
                int row=r+delRow[i];
                int col=c+delCol[i];

                if(row>=0 and row<n and col>=0 and col<m and !vis[row][col]) {
                    q.push({{row,col},steps+1});
                    vis[row][col]=1;
                }                
            }
        }

        return dis;

    }
};
// @lc code=end

