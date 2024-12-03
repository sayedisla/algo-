#include <bits/stdc++.h>
using namespace std;
int save[1000];

int fibo(int n){
    if(n == 0 or n == 1) return n;

    if(save[n] != -1) return save[n];

    return save[n] = fibo(n-1) + fibo(n-2);
}

int main()
{
    int n; cin>>n;
    memset(save, -1, sizeof(save));

    cout<<fibo(n);

    return 0;
}












