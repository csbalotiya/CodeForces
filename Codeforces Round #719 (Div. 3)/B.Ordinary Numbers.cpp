

 
#include <bits/stdc++.h>
using namespace std;
long long count_same_digit(int R){
	long long tmp = 0, ans = 0;
	long long n = log10(R) + 1;
	for (long long i = 0; i < n; i++) {
		tmp = tmp * 10 + 1;
		for (int j = 1; j <= 9; j++) {
			if ( (tmp * j) <= R) {
				ans++;
			}
		}
	}
	return ans;
}
 
int main(){
	long long t;
	cin>>t;
	while(t--){
	    long long R;
        cin>>R;
    	cout << count_same_digit(R)	<< "\n";
	}
	return 0;
}
