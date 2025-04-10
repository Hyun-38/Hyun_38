#include <iostream>
#include <map>
#include <vector>

using namespace std;

int n;
pair<char,char> tree[26];

void preorder(char root){
  if (root == '.')
    return;
  cout << root;
  preorder(tree[root-'A'].first);
  preorder(tree[root-'A'].second);    
}

void inorder(char root){
  if(root == '.')
    return;
  inorder(tree[root-'A'].first);
  cout << root;
  inorder(tree[root-'A'].second);
}

void postorder(char root){
  if(root == '.')
    return;
  postorder(tree[root-'A'].first);
  postorder(tree[root-'A'].second);
  cout << root;
}

int main(){
  cin >> n;

  for (int i = 0; i < n; i++){
    char parent, left, right;
    cin >> parent >> left >> right;
    tree[parent-'A'].first = left;
    tree[parent-'A'].second = right;
  }

  preorder('A');
  cout << "\n";
  inorder('A');
  cout << "\n";
  postorder('A');
}
