#include <iostream>
using namespace std;
/*
While1◦. Даны положительные числа A и B (A > B). 
На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). 
Не используя операции умножения и деления, найти длину незанятой части отрезка A.
*/
int main()
{
    int A,B;
    int result = A;
    cout << "Please, enter A: " << endl;
    cin >> A;
    
    cout << "Please, enter B: " << endl;
    cin >> B;
    
    while(result >= B){
        result -= B;
    }
    cout << "Result: " << result + B<< endl;
