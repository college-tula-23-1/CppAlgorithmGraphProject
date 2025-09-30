#pragma once
#include <iostream>
#include <exception>

#include "graph.h"
class adjacency_matrix : public graph
{
	typedef std::vector<std::vector<int>> matrix;
	
	matrix _matrix;

public:

	adjacency_matrix();
	adjacency_matrix(int vertices);

	void add_edge(int vertex_one, int vertex_two) override;
	int add_vertex() override;

	int remove_vertex(int vertex) override;
	void remove_edge(int vertex_one, int vertex_two) override;


	friend std::ostream& operator<<(
		std::ostream& out,
		const adjacency_matrix& graph);
};

