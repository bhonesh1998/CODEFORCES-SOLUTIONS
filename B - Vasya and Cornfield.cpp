#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define siz 1000001
#define INT_SIZE 32 
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
z i,j,k;
int main() 
    {
    fast;

    z n,d;
    cin>>n>>d;
    z t;
    cin>>t;
    while(t--)
    {
      z x,y;
      cin>>x>>y;
      if((x+y-d>=0) && (x-y-d)<=0 && (x+y-2*n+d)<=0 && (x-y+d)>=0 )
        cout <<"YES"<<endl;
      else
         cout <<"NO"<<endl;
    }
   
    return 0;
}
