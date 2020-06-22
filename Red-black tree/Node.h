#pragma once
template<class T>
class Node
{
	typedef Node* Child;

public:
	Node();
	Node(T, bool, Child, Child);
	~Node();
	Child get_left_child();
	Child get_right_child();
	T get_value();
	bool get_color();
	set_left_child(Child);
	set_right_child(Child);
	set_value(T value);
	set_color(bool color);
private:
	Child left;
	Child right;
	bool color;
	T value;	
};

