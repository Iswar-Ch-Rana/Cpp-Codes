/*  Leet Code 7. Reverse Integer
#include <bits/stdc++.h>
using namespace std;

int main ()
{
        int x;
        cin >> x ;
        int num = 0 ;
        while(x != 0)
        {
            int digit = x%10 ;
            if ((num > INT_MAX/10) || (num < INT_MIN/10))
            {
                return 0 ;
            }
            num = (num *10)+digit ;
            x = x/10 ;
        }
        cout << num << endl ;
    }
*/
// Leet Code 1009. Complement of Base 10 Integer
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int x , i = 0 , num  = 0,digit;
    cin >> x ;
    while (x != 0)
    {
        digit = 1- (x & 1) ; 
        num = num + digit * pow(10,i);
        i++ ;
        x = x>>1 ;
    }
    cout << num << endl ;
    
    return 0 ;
}