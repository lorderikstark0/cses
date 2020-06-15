#include <bits/stdc++.h>
//gives error for some test cases --> not solved completely
#define pb push_back 
#define ll long long 
#define forit(it,a) for(_typeof(a.begin()) it =a.begin();it!=a.end();it++)
#define mp make_apir 

using namespace std;

int main(){
	int n ;
	cin >> n;
	vector<int> vec;
	vec.pb(n);
	while(n!=1){
	if(n%2!=0){
		//odd condition 
		n=n*3+1;
		vec.pb(n);
	}
	else{
		n=n/2;
		vec.pb(n);
	}
	}
	for(size_t i=0;i<vec.size();i++){
		cout << vec[i]<<" ";
	}
	return 0;
}