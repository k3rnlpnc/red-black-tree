#pragma once
#include "Node.h"

template<class T>
class RedBlackTree
{
public:
	RedBlackTree();
	~RedBlackTree();
	insert(Node&);
	remove(T);
	find(T);
	int black_height();
	RedBlackTree operator+(const RedBlackTree&) const;

private:
	Node<T> root;
};

