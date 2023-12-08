#include <iostream>
#include <vector>
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
    vector<int> a(n);
    int maxpos = 0 ;
    int minpos = 101;
    FOR(i,0,n)
    {
        cin >> a[i];
        maxpos = max(a[i],maxpos);
        minpos = min(a[i],minpos);
    }
    FOR(i,0,n)
    {
        if(a[i] == maxpos)
        {
            maxpos = i;
            break;
        }
    }
    FORsub(i,n-1,0)
    {
        if(a[i] == minpos)
        {
            minpos = i;
            break;
        }
    }
    cout << ((minpos < maxpos) ? ((n-1-minpos) + maxpos - 1) : ((n-1-minpos) + maxpos));
}
