#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include "TreeNode.h"
#include <stdexcept>

template <typename T>
class BinaryTree
{
  private:
  TreeNode<T>* rootPtr;
  int nodeCount;

  public:
  BinaryTree<T>();
  BinaryTree<T>(TreeNode<T>* r);

  TreeNode<T>* GetRootPtr();

  bool IsFull(TreeNode<T>* root); //true if the tree is full, false otherwise //DONE
  void Add(T entry); //Adds a node to the tree in level order
  void Remove(); //Removes the deepest most right node from the tree
  bool Leaf(T entry); //True if node containing entry is a leaf, false otherwise

  void PrintLeaves(); //prints movie TITLE AND SCORE of each leaf
  int TreeHeight(TreeNode<T>* root) throw (std::runtime_error); //returns the height of a tree

  void PrintPreorder(TreeNode<T>* root) throw (std::runtime_error); //only prints movie SCORE //DONE
  void PrintPostorder() throw (std::runtime_error); //only prints movie SCORE //DONE
  void PrintInorder(TreeNode<T>* root) throw (std::runtime_error); //only prints movie SCORE //DONE
  void PrintLevelOrder(); //only prints movie TITLE
};
#include "BinaryTree.cpp"
#endif
