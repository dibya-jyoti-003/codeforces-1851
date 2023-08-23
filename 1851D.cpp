#include<iostream>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);init_code();
#include<bits/stdc++.h>
#define ll long long 
#define read(x) int x;cin>>x;
#define vl vector<ll>
#define vi vector<int> 
#define vvi vector<vi> 
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
		ll n ;
		cin>>n;
		/*int q=0,t=0,f=0;
		vi temp(n+1,0);
		for (int i=0;i<n-1;i++){
			read(p);
			int x = p-q;q=p;
			if (x<=n){
				if (temp[x] == 0)temp[x]=1;
				else {f++;t=x;}
			}
			else {f++;t=x;}
		}
		int p=0;
		if (f > 1)cout<<"NO";
		else if (f == 0)cout<<"YES";
		else
		{
			for (int i=1;i<=n;i++){
					if (temp[i] == 0) p+=i;
				}
			if (t == p)cout <<"YES";
			else cout <<"NO";
		}*/
		vector<ll> arr(n-1);
		for (int i=0;i<n-1;i++)cin>>arr[i];
		if (arr[n-2] > (n*(n+1))/2){cout <<"NO\n";continue;}
		for (int i=n-2;i>0;i--)arr[i] = arr[i]- arr[i-1];
		//for (auto i:arr)cout <<i<<" ";
		vector<bool> vis(n+1,0);ll count=0,pos=-1;
		for (int i=0;i<=n-2;i++){
			if (arr[i] > n or vis[arr[i]]){count++;pos=i;}
			else vis[arr[i]] =true;
		}
		if (!count)cout <<"YES";
		else if (count == 1){
			for(int i=0;i<=n;i++){
				if (!vis[i])arr[pos] -= i;
			}
			if (arr[pos] == 0)cout <<"YES";
			else cout <<"NO";
		}
		else cout <<"NO";
	    cout <<endl;
	}
	return 0;
}