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
    int cnt = 0;
    while(n>0)
    {
        if(n >= 100)
        {
            cnt += (n / 100);
            n %= 100;
        }
        else if(n >= 20)
        {
            cnt += (n / 20);
            n %= 20;
        }else if(n >= 10)
        {
            cnt += (n / 10);
            n %= 10;
        }
        else if(n >= 5)
        {
            cnt += (n / 5);
            n %= 5;
        }
        else
        {
            cnt += (n / 1);
            n %= 1;
        }
    }
    cout << cnt;
}
