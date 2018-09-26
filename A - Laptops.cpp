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
    z n;
    cin>>n;
    vector< pair<z,z> > v;
    z fl=0;
    for(i=0;i<n;i++)
    {
        z a,b; 
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    for(i=0;i<n-1;i++)
    {
            if(v[i].second > v[i+1].second)
            {
                fl=1; break;
            }
    }
    if(fl)
        cout <<"Happy Alex" ; else cout <<"Poor Alex" ;
    
}
