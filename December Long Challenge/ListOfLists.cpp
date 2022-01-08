#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        int maxEl = 1;
        int count = 1;
        sort(v.begin(), v.end());
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] == v[i - 1])
            {
                count+=1;
                maxEl = max(maxEl, count);
            }

            else
                count=1;
        }

        if (n == maxEl)
        {
            cout <<0<<endl;
            continue;
        }
 
        if (maxEl == 1)
        {
            cout <<-1<<endl;
            continue;
        }

        cout <<n-maxEl+1<< endl;
    }
}