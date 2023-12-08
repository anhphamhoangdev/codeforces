#include <iostream>
using namespace std;

#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tcase() cin>>t;
#define tloop() while(t--)


int main()
{
    faster();
    int n, k; cin >> n >> k;
    int a[n+1];
    int temp, position;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
        if(i==k)
            temp = a[i];
        if(temp == a[i])
            position = i;

    }
    int cnt = 0;
    for(int i = 1 ; i <= position ; i++)
    {
        if(a[i] > 0) cnt++;
    }
    cout << cnt;
}
