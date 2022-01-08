#include<bits/stdc++.h>
using namespace std;

int main(){

    int l, b, N; cin>>l>>b>>N;
    long long ans = 0;
    for(int i=0; i<N; i++){
        int x, y; cin>>x>>y;

        ans += max((x/l)*(y/b), (x/b)*(y/l));
    }
    cout<<ans;
}