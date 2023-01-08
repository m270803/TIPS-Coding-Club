//writing a program to check whether given positive number is palindrome or not
#include<iostream>
using namespace std;
int main ()
{
    int num,temp,rem,sum=0;
    cout<<"Enter a number:";
    cin >> num;
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if (sum==num)
        cout<<"Armstrong number";
    else
        cout<<"Not an Armstrong number";
    return 0;
}