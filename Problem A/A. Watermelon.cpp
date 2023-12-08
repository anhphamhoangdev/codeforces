#include <iostream>
using namespace std;

#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tcase() cin>>t;
#define tloop() while(t--)


int main()
{
    faster();
    int n; cin >> n;
    cout<<((!(n&1) && (n>=4)) ? "YES" : "NO");
}
