#include "graph.h"

graph::graph() : graph(0, 0) {}

graph::graph(int vertices, int edges)
	: _vertices{ vertices }, _edges{ edges } {}

int graph::vertices() { return _vertices; }

int graph::edges() { return _edges; }

