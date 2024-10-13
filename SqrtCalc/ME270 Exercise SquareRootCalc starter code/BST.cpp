#include <iostream>
#include <cmath>

#include "BST.hpp"
#include "Node.hpp"

using namespace std;

void BST::print(Node<int> *node_in, int num_edges, int LR) const {
// Privately scoped recursive member function print().
  if(node_in == nullptr) {
    return;
  }
  cout << "The node value is " << node_in->getData1() << "it is " << node_in->getData2() << " and is this deep: " << num_edges << endl;
  print(node_in->getLeft(), num_edges + 1, -1);
  print(node_in->getRight(), num_edges+1, 1);
}

void BST::print() const {
// Publicly scoped member function print().
  print(this->root, 0, 0);
}

bool BST::contains(int val_in, Node<int> *node_in) const {
// Privately scoped member function contains(). Effectively searches a subtree,
// rooted at node_in, for the input val_in. Returns true if found, otherwise
// false.
  if (node_in == nullptr) {
    return false;
  }
  if (node_in->getData1() == val_in) {
    return true;
  }
  if (val_in < node_in->getData1()) {
    return contains(val_in, node_in->getLeft());
  }
  else {
    return contains(val_in, node_in->getRight());
  }

}

bool BST::contains(int val_in) const {
// Publicly scoped member funtion contains() which returns true if incoming
// argument is contained anywhere in the binary search tree, otherwise false.
  return contains(val_in, this->root);
}

bool BST::insert(int val_in, Node<int> *node_in) {
// Privately scoped recursice member function insert(). Inserts value into
// subtree rooted at node_in.
  if (node_in == nullptr) {
    return false;
  }
  if(val_in < node_in->getData1() ) {
    if (node_in->getLeft() == nullptr) {
     node_in->setLeft(new Node<int>(val_in, calc(val_in)));
     return true;
    }
    else {
      return insert(val_in, node_in->getLeft());
    }
  }
  else {
    if(node_in->getRight() == nullptr) {
      node_in->setRight(new Node<int>(val_in, calc(val_in)));
      return true;
    }
    else {
      return insert(val_in, node_in->getRight());
    }
  }
}

bool BST::insert(int val_in) {

  if (this->contains(val_in)) {
    return false;
  }

  if (this->empty()) {
    this->root = new Node<int>(val_in, this->calc(val_in));
    return true;
  }

  return this->insert(val_in, this->root);
}

bool BST::empty() const { 
  if (root == nullptr) {
    return true;
  }
  else {return false;}
}

void BST::setRoot(Node<int> *in) { 
  this->root = in; 
}

BST::BST(int val_root) {
  setRoot(new Node<int>(val_root, this->calc(val_root)));
}

BST::BST() {
}

void BST::remove(Node<int> *n) {
// Deletes a subtree rooted at incoming node pointer.

}

BST::~BST() {
}

double BST::calc(int value) const {
  return 1.0;
}

double BST::getCalc(int val_in) const {

  Node<int> *n = getNode(val_in);
  return n == nullptr ? -1.0 : n->getData2();
}

Node<int> * BST::getNode(int val_in) const {

  return nullptr;
}

