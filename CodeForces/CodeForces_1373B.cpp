/*https://codeforces.com/problemset/problem/1373/B*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,zro=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                zro++;
            }
        }
        int one=s.size()-zro;

      //  cout<<" zero is "<<zro<<" one is "<<one<<endl;


        int trck=min(zro,one);
       // cout<<" trck is "<<trck<<endl;
        if(trck==0)
        {
            cout<<"NET"<<endl;
        }
        else if(trck%2==0)
        {
            cout<<"NET"<<endl;
        }
        else{
            cout<<"DA"<<endl;
        }

        zro=0;
        one=0;

    }



    return 0;
}
