/*
Simple Approach :

int middleOfThree(int a, int b, int c)
{
    // Checking for b
    if ((a < b && b < c) || (c < b && b < a))
       return b;
 
    // Checking for a
    else if ((b < a && a < c) || (c < a && a < b))
       return a;
 
    else
       return c;
}

But approach used above is not efficient because of extra comparisons, which can be easily minimized. 
In case first part is false, it will execute remaining half to check the condition. 
This problem remains same if we are checking for a also.

Better Approach (Needs less comparison):  (I HAVE CODED THIS)

This approach is efficient and having less number of comparisons. Outer IF loop will only be executed if a > b 
otherwise,outer ELSE will be executed.

Other Efficient Approach : 

int middleOfThree(int a, int b, int c)
{
    // x is positive if a is greater than b.
    // x is negative if b is greater than a.
    int x = a - b;
 
    int y = b - c;  // Similar to x
    int z = a - c;  // Similar to x and y.
 
    // Checking if b is middle (x and y both
    // are positive)
    if (x * y > 0)
        return b;
 
    // Checking if c is middle (x and z both
    // are positive)
    else if (x * z > 0)
        return c;
    else
        return a;
}
*/

#include <bits/stdc++.h>
using namespace std;
 
// Function to find the middle of three numbers
int middleOfThree(int a, int b, int c)
{
    // Compare each three number to find middle
    // number. Enter only if a > b
    if (a > b)
    {
        if (b > c)
            return b;
        else if (a > c)
            return c;
        else
            return a;
    }
    else
    {
        // Decided a is not greater than b.
        if (a > c)
            return a;
        else if (b > c)
            return c;
        else
            return b;
    }
}
 
// Driver Code
int main()
{
    int a = 20, b = 30, c = 40;
    cout << middleOfThree(a, b, c);
    return 0;
}
