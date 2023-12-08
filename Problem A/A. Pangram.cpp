
#include <iostream>
#include <map>
using namespace std;
 
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define tcase() int t; cin>>t
#define tloop() while(t--)
#define FOR(i,a,b) for(int i = a ; i < b ; i ++)
#define FORsub(i,a,b) for(int i = a ; i >= b ; i--)
 
 
int main()
{
    faster();
    map<char,int> mp;
    int n ; cin >> n;
    char x;
    FOR(i,0,n)
    {
        cin >> x;
        if(x >= 'A' && x <= 'Z') x += 32;
        mp[x]++;
    }
    for(char i = 'a' ; i <= 'z' ; i++)
    {
        if(mp[i] == 0)
        {
            cout << "NO" ;
            return 0;
        }
    }
    cout << "YES" ;
}
