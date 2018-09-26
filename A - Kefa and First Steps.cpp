By bhoneshchawla, contest: Codeforces Round #321 (Div. 2), problem: (A) Kefa and First Steps, Accepted, #
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
    z a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    z mm=0;z me=INT_MIN;
    z c=1,x=1;
    for(i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
        {   
           c++;
        }  
        else
        {
            if(x<c)
                x=c;
            c=1;
        }
    }
    if(x<c)
                x=c;
    cout << x;
    
}
