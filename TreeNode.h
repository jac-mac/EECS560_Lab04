#ifndef TREE_NODE_H
#define TREE_NODE_H

template <typename T>
class TreeNode
{
  private:
  T item;
  TreeNode<T>* leftChild;
  TreeNode<T>* rightChild;

  public:
  TreeNode<T>(T item);
  TreeNode<T>(T item, TreeNode<T>* left, TreeNode<T>* right);

  T getItem();
  TreeNode<T>* getLeftChild();
  TreeNode<T>* getRightChild();

  void setItem(T anItem);
  void setLeftChild(TreeNode<T>* left);
  void setRightChild(TreeNode<T>* right);


};
#include "TreeNode.cpp"
#endif
