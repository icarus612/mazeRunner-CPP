#include <iostream>
#include <vector>

using std::vector;
using std::pair;
using std::set;

class Maze {
	char _wall_char, _start_char, _end_char, _open_char, build_type;
	int _width, _height;
	vector<vector <char> >_layout;

	public:
		Maze(
			vector<vector <int> >layout, 
			char start_char = "s", 
			char end_char = "e", 
			char wall_char = "#", 
			char open_char = " ",
			char build_type = "h",
			pair <int, int> build = (10, 10)
		)
		vector<vector <char> >build_new(
			int height = 10, 
			int width = 10, 
			char maze_type = "h"
		);
		void view_info();
		void view_layout();

};