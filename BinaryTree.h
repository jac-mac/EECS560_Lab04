#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include "TreeNode.h"

template <typename T>
class BinaryTree
{
  private:
  TreeNode<T>* root;
  int nodeCount;

  public:
  BinaryTree<T>();
  BinaryTree<T>(TreeNode<T>* r);

  TreeNode<T>* GetRoot();

  bool IsFull(TreeNode<T>* root); //true if the tree is full, false otherwise
  void Add(T entry); //Adds a node to the tree in level order
  void Remove(); //Removes the deepest most right node from the tree
  bool Leaf(T entry); //True if node containing entry is a leaf, false otherwise

  void PrintLeaves(); //prints movie TITLE AND SCORE of each leaf
  int TreeHeight(); //returns the height of a tree

  void PrintPreorder(); //only prints movie SCORE
  void PrintPostorder(); //only prints movie SCORE
  void PrintInorder(); //only prints movie SCORE
  void PrintLevelOrder(); //only prints movie TITLE
};
#include "BinaryTree.cpp"
#endif
