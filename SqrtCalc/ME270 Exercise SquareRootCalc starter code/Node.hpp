#ifndef NODE_HPP_
#define NODE_HPP_

template <typename T, typename U = double>
class Node {

public:

  Node * getLeft(void) const { return this->left; }
  Node * getRight(void) const { return this->right; }
  void setLeft(Node *in) { this->left = in; }
  void setRight(Node *in) { this->right = in; }
  T getData1(void) const { return this->data1; }
  U getData2(void) const { return this->data2; }
  void setData1(T in) { this->data1 = in; }
  void setData2(T in) { this->data2 = in; }

  Node(void) : left(nullptr), right(nullptr), data1(-1), data2(-1.0) {}
  Node(T in, U in2) : left(nullptr), right(nullptr), data1(in), data2(in2) {}
  ~Node(void) { }

private:

  Node *left;
  Node *right;
  T data1;
  U data2;

};

#endif /* NODE_HPP_ */
