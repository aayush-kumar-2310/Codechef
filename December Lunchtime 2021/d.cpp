#include<bits/stdc++.h>
using namespace std;
//NOT COMPLETE
int main(){

    int t; cin>>t;

    while(t--){

        int n, k; cin>>n>>k;

        string s; cin>>s;

        string ans="";

        int i = 0, j = k-1;

        while(i<j){
            ans+=s[i];
            ans+=s[j];
            i++;
            j--;
        }
        if(i==j) ans+=s[i];
        reverse(ans.begin(), ans.end());
        ans += s.substr(k, n);
        
        cout<<ans<<endl;
    }

}