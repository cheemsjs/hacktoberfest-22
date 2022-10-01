/* LINK - https://www.codechef.com/MARCH21C/problems/CONSADD */

#include <bits/stdc++.h>
using namespace std;

int func(int *a, int *b, int r, int c);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int r,c,x;
        cin>>r>>c>>x;
        int a[r][c], b[r][c];
        int diff;
        for(int i=0; i<r; ++i) {
            for(int j=0; j<c; ++j) {
                cin>>a[i][j];
            }
        }
        for(int i=0; i<r; ++i) {
            for(int j=0; j<c; ++j) {
                cin>>b[i][j];
            }
        }

        if(r < x && c < x) {
            if(func((int *)a,(int *)b,r,c))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }

        else if(r < x) {
            for(int i=0; i<r; ++i) {
                for(int j=0; j<c-x; ++j) {
                    if(a[i][j] == b[i][j])
                        continue;
                    else {
                        diff = b[i][j] - a[i][j];
                        a[i][j] += diff;
                        int iterator=1;
                        while(iterator < x) {
                            a[i][j+iterator] += diff;
                            iterator++;
                        }
                    }
                }
            }
            if(func((int *)a,(int *)b,r,c))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }

        else if(c < x) {
            for(int i=0; i<c; ++i) {
                for(int j=0; j<(r-x); ++j) {
                    if(a[j][i] == b[j][i])
                        continue;
                    else {
                        diff = b[j][i] - a[j][i];
                        a[j][i] += diff;
                        int iterator=1;
                        while(iterator < x) {
                            a[j+iterator][i] += diff;
                            iterator++;
                        }
                    }
                }
            }
            if(func((int *)a,(int *)b,r,c))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }

        else if(r >= x && c >= x) {
            for(int i=0; i<r; ++i) {
                for(int j=0; j<=(c-x); ++j) {
                    if(a[i][j] == b [i][j])
                        continue;
                    else {
                        diff = b[i][j] - a[i][j];
                        a[i][j] += diff;
                        int iterator=1;
                        while(iterator < x) {
                            a[i][j+iterator] += diff;
                            iterator++;
                        }
                    }
                }
            }
            for(int i=0; i<c; ++i) {
                for(int j=0; j<=(r-x); ++j) {
                    if(a[j][i] == b[j][i])
                        continue;
                    else {
                        diff = b[j][i] - a[j][i];
                        a[j][i] += diff;
                        int iterator=1;
                        while( iterator < x) {
                            a[j+iterator][i] += diff;
                            iterator++;
                        }
                    }
                }
            }
            if(func((int *)a,(int *)b,r,c))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }    
    }
    return 0;
}

int func(int *a, int *b, int r, int c) {
    for(int i=0; i<r; ++i) {
        for(int j=0; j<c; ++j) {
            if(*((a+i*c) + j) != *((b+i*c) + j))
                return 0;
        }
    }
    return 1;
}