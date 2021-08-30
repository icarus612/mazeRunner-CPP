#include <iostream>
#include "node.hpp"

using namespace std;

int main() {
	pair<int, int> val1 = make_pair(234556, 376);
	pair<int, int> val2 = make_pair(333, 0);
	Node x(val1);
	Node y(val2);

	cout << x.get_value().first << endl;
	x.add_child(y);
	vector<Node> children = x.get_children();
	for (int i = 0; i < children.size(); i++) {
		cout << children[i].get_value().first << endl;
	}

	return 0;
}