#include <iostream>
using namespace std;

#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define tcase() int t; cin>>t
#define tloop() while(t--)
#define FOR(i,a,b) for(int i = a ; i < b ; i ++)
#define FORsub(i,a,b) for(int i = a ; i >= b ; i--)

int main()
{
    faster();
    tcase();
    int a,b;
    int cntMishka = 0;
    int cntChris = 0;
    tloop()
    {
        cin >> a >> b;
        if(a > b) cntMishka++;
        else if(b > a) cntChris++;
    }
    if(cntMishka > cntChris) cout << "Mishka";
    else if (cntChris > cntMishka) cout << "Chris";
    else cout << "Friendship is magic!^^";
}
