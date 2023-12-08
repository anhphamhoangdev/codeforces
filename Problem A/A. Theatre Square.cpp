#include <iostream>
using namespace std;

#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define tcase() int t; cin>>t
#define tloop() while(t--)
#define FOR(i,a,b) for(int i = a ; i < b ; i ++)
#define FORsub(i,a,b) for(int i = a ; i >= b ; i--)
#define ll long long

int main()
{
    faster();
    ll n, m, a; cin >> n >> m >> a;
    ll chieudoc, chieungang;
    chieudoc = ((n%a==0)? (n/a) : (n/a)+1);
    chieungang = ((m%a==0)? (m/a) : (m/a)+1);
    cout << chieudoc * chieungang;
}
