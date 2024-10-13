#include <iostream>

#include "BST.hpp"

using namespace std;

int main() {

  BST *my_bst = new BST();
  cout << my_bst->insert(1) << endl;;
  my_bst->insert(2);
  my_bst->insert(5);
  my_bst->insert(3);
  my_bst->insert(4);
  cout << "Is my list empty? " << my_bst->empty() << endl;
  cout << "Contains 3 " << my_bst->contains(4) << endl; 
  my_bst->print();
  delete my_bst;

  return 0;
}
