#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <deque>
#include <map>
using namespace std;
 
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tcase() cin>>t;
#define tloop() while(t--)
#define FOR(i,n) for(int i = 0 ; i < n ; i ++)
 
 
int main()
{
    faster();
    int size ; cin >> size;
    int n ; cin >> n;
    string s; cin >> s;
    while(n--)
    {
        FOR(i,size-1)
        {
            if(s[i] == 'B' and s[i+1] == 'G')
            {
                swap(s[i],s[i+1]); i++;
            }
        }
    }
    cout<<s<<endl;
}
