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
    char x;
    set<char> sa;
    do {
        cin >> x;
        if(x >= 'a' && x <= 'z') sa.insert(x);
    }while(x != '}');
    cout << sa.size();
}
