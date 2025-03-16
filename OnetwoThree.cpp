#include <iostream>
using namespace std;

int add(int n) {
	if (n == 1) {
		return 1;
	}

	else if (n == 2) {	
		return 2;
	}

	else if (n == 3) {
		return 4;
	}
	return add(n - 1) + add(n - 2) + add(n - 3);
}

int main() {
	int T; 
	int arr[10000];	
	int result[10000];

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> arr[i];	
		result[i] = add(arr[i]); 
	}

	for (int i = 0; i < T; i++) {
		cout << result[i] << '\n';
	}

	return 0;
}