#include <iostream>
#include <set>
using namespace std;
 
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define tcase() int t; cin>>t
#define tloop() while(t--)
#define FOR(i,a,b) for(int i = a ; i < b ; i ++)
#define FORsub(i,a,b) for(int i = a ; i >= b ; i--)
 
int main()
{
    faster();
    int n ; cin >> n;
    int a[n][2];
    FOR(i, 0, n)
    {
        cin >> a[i][0] >> a[i][1];
    }
    int cnt = 0;
    FOR(i,0,n-1)
    {
        FOR(j, i+1, n)
        {
            if(a[i][0] == a[j][1]) cnt++;
            if(a[i][1] == a[j][0]) cnt++;
        }
    }
    cout << cnt;
}
