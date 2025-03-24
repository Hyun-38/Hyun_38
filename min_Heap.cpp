#include<iostream>
#include<queue>

using namespace std;

int N;

priority_queue<int, vector<int>, greater<int>> p_queue;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;

		if (num == 0) {
			if (p_queue.empty()) {
				cout << 0 << "\n";
			}
			else {
				cout << p_queue.top() << "\n";
				p_queue.pop();
			}
		}
		else {
			p_queue.push(num);
		}
	}

	return 0;

}