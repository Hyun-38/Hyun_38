#include <iostream>
using namespace std;

int arr[1001];
int main() {
	arr[0] = 1;
	arr[1] = 1;
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
        arr[i] %= 10007;
	}
	cout << arr[n];
	return 0;
}