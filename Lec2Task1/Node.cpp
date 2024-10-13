#include "Node.h"

Node::Node(int value)
{
//Remeber to set these else you will get seg faults
left_ = nullptr;
right_ = nullptr;
value_ = value;
}

Node::~Node()
{

}


Node* Node::GetLeft() { 
	return left_;
}

Node* Node::GetRight() {
	return right_;
}

void Node::SetRight(Node* node) {
	right_ = node;
}

void Node::SetLeft(Node* node) {
	left_ = node;
}

int Node::GetValue() {
	return value_;
}
