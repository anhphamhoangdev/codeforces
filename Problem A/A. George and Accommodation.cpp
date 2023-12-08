#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <deque>
#include <map>
using namespace std;

#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define tcase() int t; cin>>t
#define tloop() while(t--)
#define FOR(i,n) for(int i = 0 ; i < n ; i ++)


int main()
{
    faster();
    tcase();
    int p,q,cnt=0;
    tloop()
    {
        cin >> p >> q;
        if((q - p) >= 2) cnt++;
    }
    cout << cnt;
}
