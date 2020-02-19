template <typename T>
BinaryTree<T>::BinaryTree()
{
 rootPtr = nullptr;
 nodeCount = 0;
}

template <typename T>
BinaryTree<T>::BinaryTree(TreeNode<T>* r)
{
  rootPtr = r;
}

template <typename T>
TreeNode<T>* BinaryTree<T>::GetRootPtr()
{
  return rootPtr;
}

template <typename T>
bool BinaryTree<T>::IsFull(TreeNode<T>* rootPtr)
{
  if(rootPtr == nullptr)
  {
    return true;
  }

  if(rootPtr->GetLeftChild() == nullptr && rootPtr->GetRightChild() == nullptr)
  {
    return true;
  }

  if(rootPtr->GetLeftChild() != nullptr && rootPtr->GetRightChild() != nullptr)
  {
    return (IsFull(rootPtr->GetLeftChild()) && IsFull(rootPtr->GetRightChild()));
  }

  return false;
}

template <typename T>
int BinaryTree<T>::TreeHeight(TreeNode<T>* rootPtr) throw (std::runtime_error)
{
  if(rootPtr == nullptr)
  {
    throw std::runtime_error("This tree does not exist!\n");
  }

  else if(rootPtr->GetLeftChild() == nullptr && rootPtr->GetRightChild() == nullptr)
    return 0;

  else
  {
    int heightOfLeft = TreeHeight(rootPtr->GetLeftChild());
    int heightOfRight = TreeHeight(rootPtr->GetRightChild());

    if(heightOfLeft < heightOfRight)
      return heightOfRight+1;
    else
      return heightOfLeft+1;
  }
}

template <typename T>
void BinaryTree<T>::PrintPreorder(TreeNode<T>* root) throw (std::runtime_error)
{
  if(this->rootPtr == nullptr)
  {
    throw std::runtime_error("A tree does not exist!\n");
  }
  else
  {
    std::cout << root->GetItem().GetScore();

    if(rootPtr->GetLeftChild() != nullptr)
    {
      PrintPreorder(root->GetLeftChild());
    }

    if(rootPtr->GetRightChild() != nullptr)
    {
      PrintPreorder(root->GetRightChild());
    }
  }
}

template <typename T>
void BinaryTree<T>::PrintPostorder() throw (std::runtime_error)
{
  if(this->rootPtr == nullptr)
  {
    throw std::runtime_error("A tree does not exist!\n");
  }
  else
  {
    if(rootPtr->GetLeftChild() != nullptr)
    {
      PrintInorder(rootPtr->GetLeftChild());
    }

    if(rootPtr->GetRightChild() != nullptr)
    {
      PrintInorder(rootPtr->GetRightChild());
    }

    std::cout << rootPtr->GetItem().GetScore();
  }
}

template <typename T>
void BinaryTree<T>::PrintInorder(TreeNode<T>* root) throw (std::runtime_error)
{
  if(this->rootPtr == nullptr)
  {
    throw std::runtime_error("A tree does not exist!\n");
  }
  else
  {
    if(rootPtr->GetLeftChild() != nullptr)
    {
      PrintInorder(rootPtr->GetLeftChild());
    }

    std::cout << rootPtr->GetItem().GetScore();

    if(rootPtr->GetRightChild() != nullptr)
    {
      PrintInorder(rootPtr->GetRightChild());
    }
  }
}
