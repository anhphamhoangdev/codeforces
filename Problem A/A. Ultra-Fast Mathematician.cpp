#include <iostream>
using namespace std;

#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define tcase() int t; cin>>t
#define tloop() while(t--)
#define FOR(i,n) for(int i = 0 ; i < n ; i ++)

int main()
{
    faster();
    string s1, s2; cin >> s1 >> s2;
    int size = s1.length();
    int a,b, ans;
    FOR(i,size)
    {
        a = s1[i] - '0'; b = s2[i] - '0';
        ans = a ^ b;
        s1[i] = ans + '0';
    }
    cout << s1;
}
