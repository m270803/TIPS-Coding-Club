//writing a program to check whether given positive number is palindrome or not
#include <iostream>
using namespace std;
int main()
{
     int n,dig,num,rev = 0;
     cout << "Enter a positive integer: ";
     cin >> num;
     n = num;
     do
     {
         dig = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } 
	 while (num!= 0);
     cout << " The reverse of the number: " << rev << endl;
     if (n == rev)
         cout << "palindrome";
     else
         cout << "not a palindrome";
    return 0;
}