template <typename T>
BinaryTree<T>::BinaryTree()
{
 root = nullptr;
}

template <typename T>
BinaryTree<T>::BinaryTree(TreeNode<T>* r)
{
  root = r;
}

template <typename T>
TreeNode<T>* BinaryTree<T>::GetRoot()
{
  return root;
}
