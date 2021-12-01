#include <iostream>
using namespace std;
/*
While3. Даны целые положительные числа N и K. 
Используя только операции сложения и вычитания, найти частное от деления нацело N на K, а также остаток от этого деления.
*/
int
main ()
{
  int N, K;
  cout << "Please, enter N: " << endl;
  cin >> N;

  cout << "Please, enter K: " << endl;
  cin >> K;

  int result = 0;
  while (K <= N)
    {
      N -= K;
      ++result;
    }
  cout << result;

  cout << N;
  return 0;
}
