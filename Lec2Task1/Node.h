#ifndef NODE_H
#define NODE_H

#pragma once

class Node
{
public:
    Node(int value);
    ~Node();
	Node* GetRight();
	Node* GetLeft();
	void SetLeft(Node* node);
	void SetRight(Node* node);
	int GetValue();
private:
    int value_;
    Node* left_;
    Node* right_;
};

#endif
