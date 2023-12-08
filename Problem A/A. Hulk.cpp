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
    FOR(i,t)
    {
        cout << ((i&1)?"I love ":"I hate ");
        cout << ((i==(t-1))?"it ":"that ");
    }
}
