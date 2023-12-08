#include <iostream>
using namespace std;

#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define tcase() int t; cin>>t
#define tloop() while(t--)


int main()
{
    faster();
    int m, n ; cin >> m >> n;
    int k = m * n;
    if(k&1) cout << (k - 1) / 2;
    else cout << k / 2
}
