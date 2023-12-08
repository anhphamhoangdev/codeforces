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
    //3
    //1 1 0
    //1 1 1
    //1 0 0
    int a, b, c;
    int cnt = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a >> b >> c;
        if((a+b+c) >= 2) cnt++; 
    }
    cout << cnt;

}
