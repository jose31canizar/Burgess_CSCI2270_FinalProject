#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include <vector>

struct adjvertex;
struct vertex
{
	int xpos;
	int ypos;
	std::vector<adjvertex*> adj;
	bool visited;
};
struct adjvertex
{
	vertex *v;
	int weight;
};

class Graph
{
public:
private:
	std::vector<vertex> vertices;
};

#endif
