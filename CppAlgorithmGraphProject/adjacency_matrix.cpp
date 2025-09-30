#include "adjacency_matrix.h"

adjacency_matrix::adjacency_matrix()
	: adjacency_matrix(0){}

adjacency_matrix::adjacency_matrix(int vertices)
	: graph(vertices, 0)
{
	_matrix.resize(_vertices);
	for (int i{}; i < _matrix.size(); i++)
		_matrix[i].resize(_vertices, 0);
}

void adjacency_matrix::add_edge(int vertex_one, int vertex_two)
{
	if (vertex_one >= _vertices || vertex_two >= _vertices)
		throw std::exception("vertex index range out");
	
	_matrix[vertex_one][vertex_two] = 1;
	_matrix[vertex_two][vertex_one] = 1;

	_edges++;
}

int adjacency_matrix::add_vertex()
{
	_matrix.resize(_vertices + 1);
	
	for (int i{}; i < _vertices + 1; i++)
		_matrix[i].resize(_vertices + 1, 0);
	
	_vertices++;

	return _vertices;
}

int adjacency_matrix::remove_vertex(int vertex)
{
	if (vertex >= _vertices)
		throw std::exception("vertex index range out");

	_matrix.erase(_matrix.begin() + vertex);
	for (int i{}; i < _vertices - 1; i++)
		_matrix[i].erase(_matrix[i].begin() + vertex);

	_vertices--;

	return _vertices;
}

void adjacency_matrix::remove_edge(int vertex_one, int vertex_two)
{
	if (vertex_one >= _vertices || vertex_two >= _vertices)
		throw std::exception("vertex index range out");

	_matrix[vertex_one][vertex_two] = 0;
	_matrix[vertex_two][vertex_one] = 0;

	_edges--;
}

std::ostream& operator<<(std::ostream& out, const adjacency_matrix& graph)
{
	for (auto line : graph._matrix)
	{
		for (auto item : line)
			out << item << " ";
		out << "\n";
	}
	return out;
}
