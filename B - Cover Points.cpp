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
   z t;
   cin>>t;
   std::vector<z> v;
   while(t--)
   {
    z a,b;
    cin>>a>>b;
    v.push_back(a+b);
   }
   cout << *max_element(v.begin(), v.end());

}
