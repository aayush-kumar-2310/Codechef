#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){

        int a,b,c,d; cin>>a>>b>>c>>d;

        if(a>=b)
            b+=c;
        else if(a<b)
            a+=c;

        if(a>=b)
            b+=d;
        else if(a<b)
            a+=d;

        if(a>=b)
            cout<<"N\n";
        else
            cout<<"S\n";
    }

}