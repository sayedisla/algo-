
#include<iostream>
using namespace std;
int main()
{
    int amt, n;
    cout << "Enter amount: ";
    cin >> amt;
    cout << "How Many Numbers: ";
    cin >> n;
    int minCoin[amt+1], coinSet[n];
    minCoin[0] = 0;
    for(int i=1; i<=amt; i++)
        minCoin[i] = INT_MAX - 1;
    cout << "Enter " << n << " coins: ";
    for(int i=0; i<n; i++)
        cin >> coinSet[i];
    for(int i=1;i<=amt;i++)
    {
        for(int j=0; j<n; j++)
        {
            if(coinSet[j] <= i)
            {
                int temp = minCoin[i-coinSet[j]] +1;
                if(temp < minCoin[i])
                    minCoin[i] = temp;
            }
        }
    }
    if(minCoin[amt] != INT_MAX -1)
        cout << "Minimum Coin(s): " << minCoin[amt] << endl;
    else
        cout << "Not possible!" <<endl;
    return 0;

}
