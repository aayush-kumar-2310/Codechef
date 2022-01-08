#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){

        int n; cin>>n;

        string s; cin>>s;

        bool c1=false, c2= false;

        if(n<8)
            cout<<"WA\n";

        else{
            for(int i=0; i+3<s.size(); i++){
                if(s[i] == 'c' and s[i+1] == 'o' and s[i+2] == 'd' and s[i+3] == 'e'){
                    c1 = true;
                }

                else if(s[i] == 'c' and s[i+1] == 'h' and s[i+2] == 'e' and s[i+3] == 'f')
                    c2 = true;

                if(c1 == true and c2 == false){
                    cout<<"AC\n";
                    break;
                }

                else if(c1 == false and c2 == true){
                    cout<<"WA\n";
                    break;
                }
                    
            }
        }
    }

}