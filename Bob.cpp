#include <iostream>
#include <map>
#include <vector>

using namespace std;
void preorder(char root){ // 전위순회
  if (root == '.')
    return;
  cout << root;
  preorder(tree[root-'A'].first);
  preorder(tree[root-'A'].second);    
} 

void inorder(char root){ // 중위 순회
  if(root == '.')
    return;
  inorder(tree[root-'A'].first);
  cout << root;
  inorder(tree[root-'A'].second);
}

void postorder(char root){ // 후위 순회
  if(root == '.')
    return;
  postorder(tree[root-'A'].first);
  postorder(tree[root-'A'].second);
  cout << root;
}

int main(){
  int n;
  cin >> n;
  pair<char,char> tree[26];
  for (int i = 0; i < n-1; i++){
    
  }
}