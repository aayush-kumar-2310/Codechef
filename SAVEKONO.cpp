#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){

        int N, Z, cnt = 0; cin>>N>>Z;

        priority_queue<int> q;
        for(int i=0; i<N; i++){
            int x; cin>>x;
            q.push(x);
        }

        while(!q.empty() and Z>0){
            Z = Z - q.top();
            int tmp = q.top()/2;
            q.pop();
            cnt++;
            if(tmp != 0) q.push(tmp);
        }
        cout<<endl;
        if(Z<=0)
            cout<<cnt<<endl;
        else
            cout<<"Evacuate\n";
    }
}