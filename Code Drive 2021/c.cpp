#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){

        int n, k; cin>>n>>k;
        string s; cin>>s;
        int p1=0,p2=0;
 
        vector<int> cnt(n-k+1, 0);

        while(p2<n){
            while(p2-p1 != k-1){
                if(s[p2] == '1')
                    cnt[p1]++;

                p2++;
            }

            if(s[p2] == '1')
                cnt[p1]++;
            
            // if(s[p1]=='1')
            //     cnt[p1]--;

            p2++;
            p1++;
        }

        for(auto it: cnt)
            cout<<it<<" ";
        cout<<endl;
    }
}

