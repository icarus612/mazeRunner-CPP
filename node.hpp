#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

class Node {
	pair<int, int> _value;
	vector<Node> _children;
	set<pair<int, int> > _path;

	Node(pair<int, int> value);
};