#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c){

    if(c == 'a' or c == 'e' or c == 'o' or c == 'i' or c == 'u')
        return true;

    return false;
}

int main(){

    int t; cin>>t;

    while(t--){

        int n; cin>>n;

        string s, p;
        cin>>s>>p;
        int ans = INT_MAX;
        for( char c = 'a'; c <= 'z'; c++){

            int tmp = 0;
            char si, pi;
            for(int i = 0; i<n; i++){
                if(s[i] == '?') 
                    si = c;
                else
                    si = s[i];
                    
                if(p[i] == '?') 
                    pi = c;
                else
                    pi = p[i]; 

                if(si == pi) continue;

                if( isVowel(si) and isVowel(pi) )
                    tmp += 2;

                else if( isVowel(si) or isVowel(pi) )
                    tmp++;

                else
                    tmp += 2;
            }
            ans = min(ans, tmp);
        }

        cout<<ans<<endl;
    }
}