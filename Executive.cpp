#include "Executive.h"

Executive::Executive(string file)
{
  fileName = file;
  bt = new BinaryTree<Rating>;
}

void Executive::Run()
{
  int num;
  while(num != 11)
  {
    PrintMenu();
    WrongInputTypeCheck(num);

    switch(num)
    {
      case 1:
        if(bt->IsFull(bt->GetRootPtr()))
          std::cout << "\nThis tree is a FULL tree.\n\n";
        else
          std::cout << "\nThis tree is NOT full.\n\n";
        break;

      case 6:
      {
        try
        {
          std::cout << "The height of this tree is... ";
          std::cout << bt->TreeHeight(bt->GetRootPtr()) << '\n';
        }
        catch(std::runtime_error& rte)
        {
          rte.what();
        }
        break;
      }

      default:
        std::cout << "Input could not be recognized.\n\n";
    }
  }
}

void Executive::PrintMenu()
{
  std::cout << "\nChoose one of the options below: \n\n";
  std::cout << "\t 1. IsFull\n"
            << "\t 2. AddMovie\n"
            << "\t 3. RemoveMovie\n"
            << "\t 4. Leaf\n"
            << "\t 5. PrintLeaves\n"
            << "\t 6. PrintTreeHeight\n"
            << "\t 7. Preorder\n"
            << "\t 8. Postorder\n"
            << "\t 9. Inorder\n"
            << "\t10. Levelorder\n"
            << "\t11. Exit\n\n";
  std::cout << "Your choice: ";
}

void Executive::WrongInputTypeCheck(int &num)
{
  std::cin >> num;
  while(1)
    {
      if(cin.fail())
      {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Input a NUMBER please. \n\n";
        cout << "Your choice: ";
        cin >> num;
      }
      else
        break;
    }
}
