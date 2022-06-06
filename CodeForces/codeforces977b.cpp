#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mx=0,n;
    string s;
    cin>>n;
    cin>>s;
    map<string,int>M;
    for(int i=0;i<s.size()-1;i++)
    {
        string a;
        a.push_back(s[i]);
        a.push_back(s[i+1]);
        M[a]++;
        mx=max(mx,M[a]);
    }
    for(auto it:M)
    {
        if(it.second==mx)
        {
            cout<<it.first<<endl;
            break;
        }
    }
    return 0;
}
