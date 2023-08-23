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
	    int n;cin>>n;
	    vector<int> arr(n),arr2(n);
	    for (int i=0;i<n;i++){cin >> arr[i];arr2[i]=arr[i];}
	    sort(arr.begin(),arr.end());
	    int f=0;
	    for (int i=0;i<n;i++){
	        if (arr[i]%2 != arr2[i]%2){cout<<"NO\n";f=1;break;}
	    }
	    if (f == 0){
	    cout <<"yes";
		cout <<endl;}
	}
	return 0;
}