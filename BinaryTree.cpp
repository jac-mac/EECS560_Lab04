template <typename T>
BinaryTree<T>::BinaryTree()
{
 root = nullptr;
 nodeCount = 0;
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

template <typename T>
bool BinaryTree<T>::IsFull(TreeNode<T>* root)
{
  if(root == nullptr)
  {
    return true;
  }

  if(root->GetLeftChild() == nullptr && root->GetRightChild() == nullptr)
  {
    return true;
  }

  if(root->GetLeftChild() != nullptr && root->GetRightChild() != nullptr)
  {
    return (IsFull(root->GetLeftChild()) && IsFull(root->GetRightChild()));
  }

  return false;
}
