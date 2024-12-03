#include<bits/stdc++.h>
using namespace std;
int main()
{
    string pattern, s; cin>>pattern>>s;

    int ans = 0;
    for(int i = 0; i <= s.length()-pattern.length(); ++i){
        if(s.substr(i, pattern.length()) == pattern){
            ans++;
        }
    }

    cout<<"number of matches: "<<ans<<endl;

    return 0;
}










  int main ()
            {
                string pattern,s;cin>>pattern>>s;
                int ans=0
                for (int i =0;i<=s.length()-pattern.length();++i){
                    if (s.substr(i,pattern.length())==pattern){
                ans ++;
                    }
                }
                cout "number of matches:"ans<<endl<<;
                return 0;

            }
