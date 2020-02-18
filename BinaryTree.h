#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include "TreeNode.h"

template <typename T>
class BinaryTree
{
  private:
  TreeNode<T>* root;

  public:
  BinaryTree<T>();
  BinaryTree<T>(TreeNode<T>* r);

  TreeNode<T>* GetRoot();
};
#include "BinaryTree.cpp"
#endif
