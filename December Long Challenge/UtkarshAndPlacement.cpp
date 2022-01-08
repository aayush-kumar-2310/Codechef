#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        char first, second, third;
        char x, y;
        
        cin>>first>>second>>third;
        cin>>x>>y;

        if(first == x or first == y){
            cout<<first<<endl;
        }
        else
            cout<<second<<endl;
    }
}