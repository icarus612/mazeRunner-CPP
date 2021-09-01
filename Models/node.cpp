#include <iostream>
#include <algorithm>
#include "node.hpp"

using namespace std;

Node::Node(pair<int, int> value) : _value(value) {}

pair<int, int> Node::get_value() {
	return _value;
}

void Node::add_child(Node &child_node) {
	_children.push_back(child_node);
}

vector<Node> Node::get_children() {
	return _children;
}

void Node::set_path(set<pair<int, int> > &path) {
	_path = path;
}

void Node::remove_child(Node &child_node) {
	for (int i = 0; i < _children.size(); i++) {
		cout << _children[i]._value.first << endl;
		cout << (&child_node == &_children[i]) << endl;
		cout << &child_node << endl;
		cout << &_children[i] << endl;
	}
}