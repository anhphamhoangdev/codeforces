#include <iostream>
using namespace std;

#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define tcase() int t; cin>>t
#define tloop() while(t--)


int main()
{
    faster();
    int x = 0;
    tcase();
    string s;
    tloop()
    {
        cin >> s;
        if(s == "X++" || s == "++X") x++;
        else x--;
    }
    cout << x;

}
