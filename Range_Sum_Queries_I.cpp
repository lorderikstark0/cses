

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
 
 //unfished commplete it 
 
int main()
{
   int n , q;
   cin >> n >> q;
   vector<int> arr;
   while(n--){
       int x ;
       cin >>  x;
       arr.PB(x);
   } 
   multimap<int,int> map1; 
 while(q--){
     int a ,b ;
     cin >> a >> b;
     map1.insert(pair<int ,int>(a,b));
 }
 
 
 
return 0;
   
}