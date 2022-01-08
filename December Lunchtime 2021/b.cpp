#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){

        int n, c1 = 0, c0 = 0; cin>>n;
        string s; cin>>s;

        for(int i = 0; i<n; i++){
            if(s[i] == '1')
                c1++;
            else
                c0++;
        }

        if(c1>=2 and c0>=2)
            cout<<min(c1,c0)-1<<endl;
        else
            cout<<0<<endl;
    }

}