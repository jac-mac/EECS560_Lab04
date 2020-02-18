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

  T GetItem();
  TreeNode<T>* GetLeftChild();
  TreeNode<T>* GetRightChild();

  void SetItem(T anItem);
  void SetLeftChild(TreeNode<T>* left);
  void SetRightChild(TreeNode<T>* right);


};
#include "TreeNode.cpp"
#endif
