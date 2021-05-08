// Question id 1520D - 31


#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
    ll T; cin >> T;
    while(T--){
        ll n ;cin >> n;
        map<int,int> mp;
        ll ans = 0, x;
        for(ll i = 0; i < n; i++){
            cin>>x;
            ans += mp[x-i]++;
        }
        cout<<ans<<"\n";
    }
 
	return 0;
}
