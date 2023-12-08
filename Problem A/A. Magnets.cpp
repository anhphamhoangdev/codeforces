#include <iostream>
using namespace std;

#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define tcase() int t; cin>>t
#define tloop() while(t--)
#define FOR(i,n) for(int i = 0 ; i < n ; i ++)

int main()
{
    faster();
    tcase();
    int a, b = 0,cnt=0;
    tloop()
    {
        cin >> a;
        if(a != b) cnt++;
        b = a;
    }
    cout << cnt;
}
