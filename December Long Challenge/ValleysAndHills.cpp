#include<bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin>>t;

    while(t--){

        int h, v;
        cin>>h>>v;

        if(h > v){
            h -= v;
            cout<<v*2 + h*3<<endl;  
            while(v--)
                cout<<"01";

            while(h--)
                cout<<"010";
        }

        else if(h == v){
            
            v+=1;
            cout<<v*2<<endl;
            while(v--)
                cout<<"01";
        }

        else{
            v -= h;
            cout<<h*2 + v*3<<endl;
            while(h--)
                cout<<"10";
            while(v--)
                cout<<"101";
        }
        cout<<endl;
    }
}