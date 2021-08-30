#include <iostream>
#include "node.hpp"

using namespace std;

Node::Node(pair<int, int> value) : _value(value) {}

void Node::add_child(Node node) {
	_children.push_back(node);
}