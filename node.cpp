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

void Node::set_path(set<pair<int, int> > path) {
	_path = path;
}

void Node::remove_child(Node &child_node) {
	//vector <int> :: iterator itr;
	//itr = find(_children.begin(), _children.end(), child_node);
}