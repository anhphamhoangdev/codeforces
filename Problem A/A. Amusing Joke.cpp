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
    string s1; cin >> s1;
    string s2; cin >> s2;
    int size = s1.length() + s2.length();
    s1.append(s2);
    string s3; cin >> s3;
    if(s3.length() > size)
    {
        cout << "NO";
        return 0;
    }
    sort(s1.begin(),s1.end());
    sort(s3.begin(),s3.end());
    FOR(i,0,size)
    {
        if(s1[i] != s3[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
