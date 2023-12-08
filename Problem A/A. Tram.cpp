#include <iostream>
using namespace std;
 
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tcase() cin>>t;
#define tloop() while(t--)
#define FOR(i,n) for(int i = 0 ; i < n ; i ++)
 
int main()
{
    faster();
    int n ; cin >> n;
    int c[n][2];
    FOR(i,n)
    {
        cin >> c[i][0];
        cin >> c[i][1];
    }
    int temp = c[0][1];
    int maxTram = temp;
    for(int i = 1 ; i < n ; i++)
    {
        temp = temp - c[i][0] + c[i][1];
        maxTram = max(maxTram, temp);
    }
    cout << maxTram;
}
