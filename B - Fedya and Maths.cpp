#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define siz 20000001
#define MAXN 100001
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
z i,j;
int main() 
{
    fast;
    string s ;
    cin>>s;
    z ss = s.length();
    if(ss>=2)
    {
        string s1;
        s1.push_back(s[ss-2]);
        s1.push_back(s[ss-1]);
        z x = stoi(s1);
        if( x%4==0)
            cout << 4;
        else
            cout << 0;
    } 
    else
    {
        if(stoi(s)%4==0)
            cout << 4;
        else
            cout << 0;

    }
    

    
}
