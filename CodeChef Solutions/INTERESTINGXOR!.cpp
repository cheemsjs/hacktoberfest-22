/* LINK - https://www.codechef.com/MARCH21C/problems/IRSTXOR */

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t,c,a,b,d,D;
    long long int product;
    cin>>t;
    while(t--){
        cin>>c;
        product =0;
        d = log2(c)+1;
        D = pow(2,d);
        
        if (c == D/2)
        {
            product = (c-1)*(D-1);
        }
        else
        {
            a = (D/2)-1; 
            b = a^c;
            product = a*b;
        }
        
        cout<<product<<endl;
    }
    return 0;
}