#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int s[n], f[n];
    for(int i = 0; i < n; ++i) cin>>s[i]>>f[i];

    vector<int> a;
    a.push_back(0);
    int k = 0;
    for(int i = 1; i < n; ++i){
        if(s[i] >= f[k]){
            a.push_back(i);
            k = i;
        }
    }

    for(int i = 0; i < a.size(); ++i){
        cout<<a[i]<<" ";
    }

    return 0;
}
