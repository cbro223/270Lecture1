#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree()
{
head_ = nullptr;
}

BinarySearchTree::~BinarySearchTree()
{

}

void BinarySearchTree::Insert(int value) {
	Node *new_node = new Node(value);
	// If there is nothing in the binary tree 
	if (head_ == nullptr) {
		head_ = new_node;		
		return;
	}
	Node *current = head_;	
	Node *prev = nullptr;
	while (current != nullptr) {
		// If it already exists in our list 
		if (current->GetValue() == value) {
			return;
		}
		
		if (current->GetValue() < value) { 
			//If the current node is lesser than the value, we want to traverse right 
			prev = current;
			current = current->GetRight();
		}
		else {
			prev = current;
			current = current->GetLeft();
		}
	}	
	// At this point, we have found the desired node 
	current = new_node; 
	if (value < prev->GetValue()) {
		prev->SetLeft(current);
	}	
	else {
		prev->SetRight(current);
	}

}
