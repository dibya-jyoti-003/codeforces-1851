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
	    int n,k;
	    cin>>n>>k;
	    vector<int> arr(n);
	    for (int i=0;i<n;i++)cin>>arr[i];
	    int c1=0,c2=0,ind1=0,ind2=n-1;
	    for (int i=0;i<n;i++){
	        if (c1 != k and arr[i] == arr[0]){
	            c1++;
	            ind1=i;
	        }
	        if (c2 != k and arr[n-i-1]==arr[n-1]){c2++;ind2=n-i-1;}
	    }
	    if ((ind1 <= ind2 or arr[0]==arr[n-1]) and (c1 == k and c2 == k))cout <<"YES";
	    else cout <<"NO";
	    cout <<endl;
	}
	return 0;
}