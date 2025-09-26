#pragma once
class graph
{
	int _vertices;
	int _edges;

public:
	graph();
	graph(int vertices, int edges);

	int vertices();
	int edges();

	virtual void add_vertex() = 0;
	virtual void add_edge() = 0;

	virtual void remove_vertex() = 0;
	virtual void remove_edge() = 0;

	virtual ~graph() {}
};

