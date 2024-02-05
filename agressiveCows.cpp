// C++ code to implement the approach

#include <iostream>
#include <vector>
using namespace std;


bool ok(vector<int>& v, int x, int c){
	int n = v.size();
	int count = 1;
	int last = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] - v[last] >= x) {
			last = i;
			count++;
		}
		if (count >= c) {
			return true;
		}
	}
	return false;
}

int aggressive_cows(vector<int>& v, int n, int k){
	int l = 0;
	int r = v[n-1] - v[0];
	int ans = -1;

	while (l<=r) {
		int mid = l + (r - l) / 2;
		if (ok(v, mid, k)) {
			ans = mid;
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}

	return ans;
}


int main(){
	int K = 3;
	vector<int> arr = { 1, 2, 4, 8, 9 };
	int N = arr.size();
	int ans = aggressive_cows(arr, N, K);
	cout << ans << endl;
}