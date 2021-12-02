#include <iostream>
using namespace std;
/*
While4◦. Дано целое число N (>0). 
Если оно является степенью числа 3, 
то вывести TRUE, если не является — вывести FALSE.
*/
int
main ()
{
  int N;
  cout << "Please, enter N: " << endl;
  cin >> N;

  while (N > 0)
    {
      N -= 3;
      if (N == 0)
	cout << "TRUE";
      else
	cout << "FALSE";
    }
  return 0;
}
