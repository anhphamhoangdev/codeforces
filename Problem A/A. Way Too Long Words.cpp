#include <iostream>
using namespace std;

#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tcase() cin>>t;
#define tloop() while(t--)


int main()
{
    faster();
    int n;
    cin>>n;
    while(n--)
    {
        string s; cin >> s;
        if(s.length() > 10) cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        else cout<<s<<endl;
    }
}
