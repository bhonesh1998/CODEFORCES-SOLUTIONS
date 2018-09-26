#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define siz 1000001
#define MAXN 100001
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
int main() 
{
   z n;
   cin>>n;
   if(n%3==0)
    pf("1 1 %lld",n-2);
    else
    pf("1 2 %lld",n-3);

}
