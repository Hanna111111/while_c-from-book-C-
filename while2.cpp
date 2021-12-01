#include <iostream>
using namespace std;
/*
While2◦. Даны положительные числа A и B (A > B). 
На отрезке длины A размещено максимально возможное количество отрезков длины B 
(без наложений). 
Не используя операции умножения и деления, 
найти количество отрезков B, размещенных на отрезке A.
*/

int main()
{
    int A,B;
    cout << "Please, enter A: " << endl;
    cin >> A;
    
    cout << "Please, enter B: " << endl;
    cin >> B;
    
    int res = A;
    
    while(res >= A){
        res -=A;
    }
    cout << "Result: " << res + A << endl;
    return 0;
}
