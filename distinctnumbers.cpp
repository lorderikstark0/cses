#include <bits/stdc++.h>

#define pb push_back 
#define ll long long 
#define forit(it,a) for(_typeof(a.begin()) it =a.begin();it!=a.end();it++)
#define mp make_apir 

using namespace std;
 //need to look again -->check for this again
set<int> converttoSet(vector<int> v){
	set<int> s;
	copy(
		s.begin();
		s.end();
		back_inserter(v);
	
	)
	return s;
}

int main(){
	int t;
	cin >> t;
	vector<int> arr;
	while(t--){
		int p;
		cin >> p;
		arr.pb(p);
	}
	set<int>s =converttoSet(arr);
	
	cout << s.size()<< "\n";	
	return 0;
}