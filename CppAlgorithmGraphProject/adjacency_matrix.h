#pragma once
#include <iostream>
#include <iomanip>
#include <exception>

#include "graph.h"

typedef std::vector<std::vector<int>> matrix;

class adjacency_matrix : public graph
{
	matrix _matrix;

	void create_matrix();

public:

	adjacency_matrix();
	adjacency_matrix(int vertexes);
	adjacency_matrix(names vertex_names);

	void add_edge(int vertex_one, int vertex_two) override;
	void add_edge(std::string vertex_one, int vertex_two);
	void add_edge(int vertex_one, std::string vertex_two);
	void add_edge(std::string vertex_one, std::string vertex_two);

	int add_vertex() override;
	int add_vertex(std::string vertex);

	void remove_edge(int vertex_one, int vertex_two) override;
	
	void remove_edge(std::string vertex_one, int vertex_two);
	void remove_edge(int vertex_one, std::string vertex_two);
	void remove_edge(std::string vertex_one, std::string vertex_two);

	int remove_vertex(int vertex) override;
	int remove_vertex(std::string vertex);
	

	friend std::ostream& operator<<(
		std::ostream& out,
		const adjacency_matrix& graph);
};

