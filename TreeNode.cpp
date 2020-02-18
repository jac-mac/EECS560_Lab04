template <typename T>
TreeNode<T>::TreeNode(T item)
{

}

template <typename T>
TreeNode<T>::TreeNode(T item, TreeNode* left, TreeNode* right)
{

}

template <typename T>
T TreeNode<T>::GetItem()
{
  return item;
}

template <typename T>
TreeNode<T>* TreeNode<T>::GetLeftChild()
{
  return leftChild;
}

template <typename T>
TreeNode<T>* TreeNode<T>::GetRightChild()
{
  return rightChild;
}

template <typename T>
void TreeNode<T>::SetItem(T anItem)
{
  item = anItem;
}

template <typename T>
void TreeNode<T>::SetLeftChild(TreeNode<T>* left)
{
  leftChild = left;
}

template <typename T>
void TreeNode<T>::SetRightChild(TreeNode<T>* right)
{
  rightChild = right;
}
// template <typename T>
