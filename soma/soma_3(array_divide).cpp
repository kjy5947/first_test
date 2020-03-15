#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int arr[3000]; int diff[3000];

int main() {

	int n, k;

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		arr[i] = a;
	}

	for (int i = 0; i < n - 1; i++)
	{
		diff[i] = arr[i] - arr[i + 1];
	}
	sort(diff[0], diff[n - 2]);

	int ans = arr[n - 1] - arr[0];
	for (int i = 0; i < k; i++)
	{
		ans += diff[i];
	}
	cout << ans << '\n';


}