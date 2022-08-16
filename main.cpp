
#include <iostream>
using namespace std;

int main()
{

  int num1;
  int num2;
  int num3;
  int num4;
  int num5;

  int counter;

 
  cout << "What is the first number of your sequence? ";
  cin >> num1;
  cout << endl;

  cout << "What is the second number of your sequence? ";
  cin >> num2;
  cout << endl;

  cout << "What is the third number of your sequence? ";
  cin >> num3;
  cout << endl;

  cout << "What is the fourth number of your sequence? ";
  cin >> num4;
  cout << endl;

  cout << "What is the fifth number of your sequence? ";
  cin >> num5;
  cout << endl;

 
  cout << "\033[34mThe sequence in ascending order is:\033[0m | " ;

 
  for (counter = 0; counter <= 100000000; counter++)
  {
    if (counter == num1)
    {
      cout << num1 << " | " ;
    }

    if (counter == num2)
    {
      cout << num2 << " | ";
    }
   
    if (counter == num3)
    {
      cout << num3 << " | ";
    }

   
    if (counter == num4)
    {
      cout << num4 << " | ";
    }

   
    if (counter == num5)
    {
      cout << num5 << " | ";
    }

  }
 
  cout << endl;
  return 0;
}

