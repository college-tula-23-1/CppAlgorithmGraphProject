#pragma once
#include <vector>
#include <string>

class graph
{
protected:
	int _vertices;
	int _edges;

	std::vector<std::string> _vertex_names;

public:
	graph();
	graph(int vertices, int edges);

	int vertices();
	int edges();

	virtual void add_edge(int vertex_one, int vertex_two) = 0;
	virtual int add_vertex() = 0;

	virtual int remove_vertex(int vertex) = 0;
	virtual void remove_edge(int vertex_one, int vertex_two) = 0;

	virtual ~graph() {}
};

