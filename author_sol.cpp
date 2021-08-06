#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n;
	cin >> n;
	// remaining days
	long long remaining = n % 7;
	// total weeks
	long long weeks = n / 7;
	// minimum days off (initial)
	long long mn = weeks * 2;
	// maximum days off (initial)
	long long mx = weeks * 2;
	// to get the minimum, starting day must be MONDAY
	if (remaining == 6) {
		// if the remaining days is equal to 6, then add 1 day to the minimum
		mn++;
	}
	// to get the maximum, starting day must be SATURDAY
	if (remaining < 2) {
		// if the remaining days is less than 2, then simply add it to the maximum
		mx += remaining;
	} else {
		// since we started on SATURDAY and 'n' is greater than or equal to 2, then 
		// automatically there are 2 days off that will be added
		mx += 2;
	}
	cout << mn << " " << mx << '\n';
	return 0;
}
