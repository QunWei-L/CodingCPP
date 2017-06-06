//
// Created by admin on 2017/6/6.
//
#include<iostream>
#include<algorithm>
#include<vector>
#include <String>
using namespace std;


class NumArray {
public:
    NumArray(vector<int> nums) {

    }

    int sumRange(int i, int j) {

    }

};

class Node {
public:
    int value;
    int left;
    int right;
    Node *leftNode;
    Node *rightNode;
    string a = "YES!!";

    Node() {}

    Node(int value, int left, int right) : value(value), left(left), right(right) {
        cout<<a<<endl;
        cout<<value<<endl;

    }

    Node(int value, int left, int right, Node *leftNode, Node *rightNode) : value(value), left(left), right(right),
                                                                            leftNode(leftNode), rightNode(rightNode) {

    }
};

int main() {
    int a[10];
    Node node(1, 2, 3);
    cout << node.value << ":" << node.left << ":" << node.right << endl;
    return 0;
}

