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
void solve (vl& ans,vvi &list,int curr,vi& coin,vi& vis){
	vis[curr] =1;
	ll res=0;
	for (int i=0;i<list[curr].size();i++){
		int temp=ans[list[curr][i]];
		if (temp >= 0)res += temp;
		else {
			solve (ans,list,list[curr][i], coin,vis);
			res += ans[list[curr][i]];
		}
	}
	if (list[curr].empty()) ans[curr] = coin[curr];
	else ans[curr] = (coin[curr]<=res)?coin[curr]:res;
}
int main(){
	fast;
	read(t);
	while (t--){
		int n,k;
		cin >>n>>k;
	    vi coin(n+1,0),vis(n+1,0);
	    vl ans(n+1,-1);
	    for (int i=1;i<=n;i++)cin >> coin[i];
	    for (int i=0;i<k;i++){read(p);ans[p]=0;vis[p]=1;}
	    vvi list(n+1);
		for (int i=1;i<=n;i++){
			read(p);
			for (int j=0;j<p;j++){
				read(x);
				list[i].push_back(x);
			}
		}
		for (int i=1;i<=n;i++){
			if (!vis[i])solve (ans,list,i,coin,vis);
		}
		for (int i=1;i<=n;i++)cout <<ans[i]<<" ";
	    cout <<endl;
	}
	return 0;
}