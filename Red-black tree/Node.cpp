#include "stdafx.h"
#include "Node.h"

template<class T>
Node<T>::Node()
{
	this->value = NULL;
	this->color = 1; // 1 - black, 2 - red
	this->left = nullptr;
	this->right = nullptr;
}

template<class T>
Node<T>::Node(T value, bool color, Child left, Child right)
{
	this->value = value;
	this->color = color;
	this->left = left;
	this->right = right;
}

template<class T>
Node<T>::get_color()
{
	return this->color;
}

template<class T>
Node<T>::get_value()
{
	return this->value;
}

template<class T>
Node<T>::get_left_child()
{
	return this->left;
}

template<class T>
Node<T>::get_right_child()
{
	return this->right;
}

template<class T>
Node<T>::set_color(bool color)
{
	this->color = color;
}

template<class T>
Node<T>::set_value(T value)
{
	this->value = value;
}

template<class T>
Node<T>::set_left_child(Child left)
{
	this->left = left;
}

template<class T>
Node<T>::set_right_child(Child right)
{
	this->right = right;
}

template<class T>
Node<T>::~Node()
{
}
