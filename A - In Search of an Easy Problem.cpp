By bhoneshchawla, contest: Codeforces Round #512 (Div. 2, based on Technocup 2019 Elimination Round 1), problem: (A) In Search of an Easy Problem, Accepted, #
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

    // z t;
    // cin >> t;
    // while( t-- )
    //   {
          z n;
          cin>>n;
          z a[n];
          z fl=0;
          for(i=0;i<n;i++) 
            {cin>>a[i];if(a[i]==1) fl=1;}
          
          if(fl)
             cout <<"HARD";
           else
            cout <<"EASY";
         

      //}
   
    return 0;
}



