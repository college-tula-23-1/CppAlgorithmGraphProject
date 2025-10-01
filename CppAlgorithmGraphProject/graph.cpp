#include "graph.h"

graph::graph() : graph(0, 0) {}

graph::graph(int vertexes, int edges)
	: _vertexes{ vertexes }, _edges{ edges } 
{
	_vertex_names.resize(_vertexes, "");
}

graph::graph(names vertex_names)
	: _vertexes{ (int)vertex_names.size() }, _edges{}
{
	std::ranges::copy(vertex_names.begin(),
					vertex_names.end(),
					std::back_inserter(_vertex_names));
}

int graph::vertices() { return _vertexes; }

int graph::edges() { return _edges; }

int graph::vertex_index(std::string vertex)
{
	return std::distance(_vertex_names.begin(),
		std::ranges::find(_vertex_names, vertex));
}

