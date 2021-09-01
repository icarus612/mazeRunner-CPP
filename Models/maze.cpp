#include <iostream>

using std::vector;
using std::pair;
using std::set;

Maze::Maze(
	vector<vector <int> >layout, 
	char start_char = "s", 
	char end_char = "e", 
	char wall_char = "#", 
	char open_char = " ",
	char build_type = "h",
	pair <int, int> build = (10, 10)
) :  _start_char(start_char), _end_char(end_char), _open_char(open_char) {}
