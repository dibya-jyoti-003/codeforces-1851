#include<iostream>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);init_code();
#include<bits/stdc++.h>
#define ll long long 
#define read(x) int x;cin>>x;
using namespace std;
void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("inputf.txt","r",stdin);
	freopen("outputf.txt","w",stdout);
	#endif
}
int main(){
	fast;
	read(t);
	while (t--){
	    int n,m,k,h;
	    cin>>n>>m>>k>>h;
	    vector<int> arr(n);
	    int ans =0;
	    for (int i=0;i<n;i++){
	        int p;cin>>p;arr[i]=p;
	        int t= abs(h-p);
	        if (t < (k*m) and t!=0 and (h%k == p%k))ans++;
	    }
	    cout <<ans;
		cout <<endl;
	}
	return 0;
}