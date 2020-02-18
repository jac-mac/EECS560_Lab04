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

template <typename T>
int BinaryTree<T>::TreeHeight(TreeNode<T>* root) throw (std::runtime_error)
{
  if(root == nullptr)
  {
    throw std::runtime_error("This tree does not exist!\n");
  }

  else if(root->GetLeftChild() == nullptr && root->GetRightChild() == nullptr)
    return 0;

  else
  {
    int heightOfLeft = TreeHeight(root->GetLeftChild());
    int heightOfRight = TreeHeight(root->GetRightChild());

    if(heightOfLeft < heightOfRight)
      return heightOfRight+1;
    else
      return heightOfLeft+1;
  }
}
