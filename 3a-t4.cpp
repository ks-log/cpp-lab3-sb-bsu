#include <iostream>
using namespace std;

int main()
{
int k, i = 1, sum_k = 0, number;

cout << "Enter the amount of integers to sum = ";
cin >> k;

if (cin.fail())
    {
    cin.clear();
    cin.ignore(); 
    cout << "Invalid input." << endl << "Enter an integer for the amount of integers to sum: ";
    cin >> k;
    }
if (k == 0) { cout << "The total sum of 0 integers is: 0" << endl; }
else {
      do {
           cout << "Enter integer nr. " << i << ": ";
           cin >> number;
           if (cin.fail())
           {
            cin.clear();
            cin.ignore(); 
            cout << "Invalid input." << endl << "Please enter an integer: ";
            cin >> number;
           }   
           sum_k += number; i++;
         }
while (i <= k);
cout << "The total sum of " << k << " integers is: " << sum_k << endl;
     }
return 0;
}
