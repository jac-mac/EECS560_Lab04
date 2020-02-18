template <typename T>
TreeNode<T>::TreeNode(T item)
{

}

template <typename T>
TreeNode<T>::TreeNode(T item, TreeNode* left, TreeNode* right)
{

}

template <typename T>
T TreeNode<T>::getItem()
{
  return item;
}

template <typename T>
TreeNode<T>* TreeNode<T>::getLeftChild()
{
  return leftChild;
}

template <typename T>
TreeNode<T>* TreeNode<T>::getRightChild()
{
  return rightChild;
}

template <typename T>
void TreeNode<T>::setItem(T anItem)
{
  item = anItem;
}

template <typename T>
void TreeNode<T>::setLeftChild(TreeNode<T>* left)
{
  leftChild = left;
}

template <typename T>
void TreeNode<T>::setRightChild(TreeNode<T>* right)
{
  rightChild = right;
}
// template <typename T>
