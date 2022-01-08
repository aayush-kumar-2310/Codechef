#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){

        string s; cin>>s;
        bool flg = false, enc2 = false;
        for(int i= 0; i<s.size(); i++){
            if(s[i] == '1' and enc2 == false){
                flg = true;
            }

            if(s[i] == '0' and flg == true)
                enc2 = true;

            if(s[i] == '1' and enc2 == true){
                flg = false;
                break;
            }
                
        }

        if(flg == true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}