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
    set<int> a;
    int p; cin >> p;
    int temp;
    FOR(i,0, p)
    {
        cin >> temp;
        a.insert(temp);
    }
    cin >> p;
    FOR(i,0, p)
    {
        cin >> temp;
        a.insert(temp);
    }
    cout << ((a.size() == n) ? "I become the guy." : "Oh, my keyboard!");
}
