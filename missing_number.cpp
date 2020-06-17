#include <bits/stdc++.h>

#define pb push_back 
#define ll long long 
#define forit(it,a) for(_typeof(a.begin()) it =a.begin();it!=a.end();it++)
#define mp make_apir 

using namespace std;

int find_num(vector<int>& arr,int n){
	int sum1=0;
	for(size_t i=0;i<arr.size();i++){
		sum1+=arr[i];
	}
	
	int sum2=0;
	for(int i=1;i<=n;i++){
		sum2+=i;
	}
	return sum2-sum1;
}


int main(){
	//the basic idea is takign sum of all in the input arr 
	//and removing from the total summation of an actual continuous one 
	int n;
	cin >> n;
	vector<int> arr;
	int p =n-1;
	while(p--){
		int h;
		cin >> h;
		arr.pb(h);
	}
	cout << find_num(arr,n)<<"\n";
return 0;
}