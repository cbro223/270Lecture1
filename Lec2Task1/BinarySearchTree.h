#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include "Node.h"
#pragma once

class BinarySearchTree
{
public:
    BinarySearchTree();
    ~BinarySearchTree();
    void Insert(int value);
private:
    Node* head_;

};

#endif
