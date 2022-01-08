#include<bits/stdc++.h>
using namespace std;

long long maxAlternatingSum(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        for(int i=0;i<n;i++){
            int temp=0;

            while(i<n-1 && nums[i]<=nums[i+1] ){
                i++;
            }
            if(i>=n){
                break;
            }
            ans += nums[i];
            i++;
            

            while(i<n-1 && nums[i]>=nums[i+1]){
                i++;
            }
            if(i>=n){
                break;
            }
            if(i==n-1){
                continue;
            }
            ans -= nums[i];
        }
        return ans;
    }

int main(){

    int t;
    cin >>t;
    
    while(t--){
        
        int n;
        cin>>n;
        
        vector<int> v;
        
        for(int i =0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        
        cout<<maxAlternatingSum(v)-1<<endl;
    }

}