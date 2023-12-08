#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
 
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tcase() cin>>t;
#define tloop() while(t--)
 
struct charx {
    int position;
    char key;
};
 
bool compareByPosition(const charx& key1, const charx& key2) {
    return key1.position < key2.position;
}
 
int main()
{
    faster();
    int t; tcase();
    tloop(){
        // ARaBbbitBaby
        // ity
        string s; cin >> s;
        stack<charx> lowerkey;
        stack<charx> upperkey;
        vector<charx> ans;
        int n = (int)s.size();
        for(int i = 0 ; i < n; i++)
        {
            if(islower(s[i]) && s[i] != 'b')
            {
                lowerkey.push({i,s[i]});
            }
            else if(isupper(s[i]) && s[i] != 'B')
            {
                upperkey.push({i,s[i]});
            }
            else if(s[i] == 'b')
            {
                if(!lowerkey.empty())
                {
                    lowerkey.pop();
                }
            }
            else if(s[i] == 'B')
            {
                if(!upperkey.empty())
                {
                    upperkey.pop();
                }
            }
        }
        while(!lowerkey.empty())
        {
            charx a = lowerkey.top();
            ans.push_back(a);
            lowerkey.pop();
        }
        while(!upperkey.empty())
        {
            charx a = upperkey.top();
            ans.push_back(a);
            upperkey.pop();
        }
        if(!ans.empty()) sort(ans.begin(), ans.end(), compareByPosition);
 
        for(auto a : ans)
        {
            cout<<a.key;
        }
        cout<<endl;
    }
}
