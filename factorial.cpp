#include<bits/stdc++.h>
using namespace std;
const int N = 10004;
long long save[N + 1];

int fact(int n){
    if(n == 0 or n == 1) return 1;

    if(save[n] != -1) return save[n];

    return save[n] = n * fact(n-1);
}

int main() {
    int n;
    memset(save, -1, sizeof(save));

    cout<<fact(n);

	return 0;
}
