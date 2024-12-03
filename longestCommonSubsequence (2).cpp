#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x, y;
    cin>>x>>y;
    int n = x.length();
    int m = y.length();
    int c[n+1][m+1];

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            if(i==0 || j==0)
            {
                c[i][j] = 0;
            }
            else if(x[i-1]==y[j-1])
            {
                c[i][j]=c[i-1][j-1] + 1;
            }
            else
            {
                c[i][j] = max(c[i][j-1], c[i-1][j]);
            }
        }
    }

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<c[n][m]<<endl;
    string lcs = "";
    int i = n, j = m;
    while (i > 0 && j > 0)
    {
        if (x[i-1]==y[j-1])
        {
            lcs = x[i - 1] + lcs;
            i--;
            j--;
        }
        else if (c[i - 1][j] >= c[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }

    cout<<lcs<<endl;



}
