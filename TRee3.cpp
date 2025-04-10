#include <iostream>
#include <vector>

using namespace std;

int N, root, delNode;
vector<vector<int>> tree;
int Count = 0;

void dfs(int A) {
    if (A == delNode) return;

    bool treenode = true;
    for (int child : tree[A]) {
        if (child == delNode) continue;
        treenode = false;
        dfs(child);
    }

    if (treenode) Count++;
}

int main() {
    cin >> N;
    tree.resize(N);

    for (int i = 0; i < N; i++) {
        int parent;
        cin >> parent;
        if (parent == -1) {
            root = i;
        } 
        else {
            tree[parent].push_back(i);
        }
    }

    cin >> delNode;

    if (delNode == root) {
        cout << 0 << '\n';
    } else {
        dfs(root);
        cout << Count << '\n';
    }

    return 0;
}
