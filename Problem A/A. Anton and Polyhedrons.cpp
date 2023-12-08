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
    int face = 0;
    int n ; cin >> n;
    string s;
    FOR(i,0,n)
    {
        cin >> s;
        if(s == "Tetrahedron") face += 4;
        else if(s == "Cube") face += 6;
        else if(s == "Octahedron") face += 8;
        else if(s == "Dodecahedron") face += 12;
        else face += 20;
    }
    cout << face;
}
