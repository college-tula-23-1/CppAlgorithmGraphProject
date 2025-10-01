#include "graph.h"

graph::graph() : graph(0, 0) {}

graph::graph(int vertexes, int edges)
	: _vertexes{ vertexes }, _edges{ edges } {}

graph::graph(names vertex_names)
	: _vertexes{  }
{
}

int graph::vertices() { return _vertexes; }

int graph::edges() { return _edges; }

