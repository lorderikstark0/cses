

#include<bits/stdc++.h>
using namespace std;
 
typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl;
 
 
int main()
{
 int n ;
 cin >> n;
 vector<int> arr;
 while(n-->0){
     int h;
     cin >> h;
    arr.PB(h);
 }
 set<int> set1;
 copy(arr.begin(),arr.end(),
 inserter(set1,set1.end()));

cout << set1.size()<<"\n";
  
return 0;
   
}