#ifndef BST_HPP_
#define BST_HPP_

#include "Node.hpp"

class BST {

public:
  BST(void);
  BST(int);
  ~BST(void);

  void print(void) const;
  bool empty(void) const;
  bool contains(int) const;
  bool insert(int);
  double getCalc(int) const;

private:
  Node<int> *root;

  double calc(int) const;
  Node<int> * getNode(int) const;
  bool contains(int, Node<int> *) const;
  bool insert(int, Node<int> *);
  void print(Node<int> *, int, int) const;
  void remove(Node<int> *);
  void setRoot(Node<int> *);

};

#endif /* BST_HPP_ */
