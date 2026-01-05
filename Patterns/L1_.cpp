#include <iostream>
using namespace std;

void printHollowRectangle(int n, int m)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= m; k++)
        {
            if (i == 1 || i == n || k == 1 || k == m)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

void printInvertedSolidPyramid(int n)
{
    // Implement the pattern printing logic here

    // For each row
    for (int i = 1; i <= n; i++)
    {
        // Loop For Spaces
        for (int k = 1; k <= (i - 1); k++)
        {
            cout << " ";
        }

        // Loop for *
        for (int k = 1; k <= (2 * n - (2 * i - 1)); k++)
            cout << "*";

        cout << "\n";
    }
}

void printHollowPyramid(int n)
{
    // Implement the pattern printing logic here
    for (int i = 1; i <= n; i++)
    {

        // Starting-Spaces
        for (int k = 1; k <= (n - i); k++)
        {
            cout << " ";
        }

        // * Printing
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            if (k == 1 || k == (2 * i - 1) || i == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        // Next Row
        cout << "\n";
    }
}

void printSolidDiamond(int n)
{
    // Implement the pattern printing logic here

    // Upper Solid Pyramid (n-rows)
    for (int i = 1; i <= n; i++)
    {
        // Spaces
        for (int k = 1; k <= (n - i); k++)
        {
            cout << " ";
        }
        // Stars
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    // Lower Solid Pyramid ((n-1) rows)
    for (int i = 1; i <= (n - 1); i++)
    {
        // Spaces
        for (int k = 1; k <= (i); k++)
        {
            cout << " ";
        }
        // Stars
        for (int k = 1; k <= (2 * (n - i) - 1); k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void rightAngledTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < (i + 1); k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void printHollowDiamond(int n)
{
    // Implement the pattern printing logic here

    // Upper Pattern
    for (int i = 1; i <= n; i++) {
        // Spaces
        for (int k = 1; k <= (n-i); k++){
            cout << " ";
        }
        // Stars
        for (int k = 1; k <= (2*i-1); k++){
            if (k == 1 || k == (2*i-1)) 
                cout << "*";
            else 
                cout << " ";
        }

        cout << "\n";
    }

    // Lower Pattern
    for (int i = 1; i <= (n-1); i++) {
        // Spaces
        for (int k = 1; k <= i; k++) {
            cout << " ";
        }

        // *
        for (int k = 1; k <= (2*(n-i) - 1); k++) {
            if (k == 1 || k == (2*(n-i) - 1)) 
                cout << "*";
            else 
                cout << " ";
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    cin >> n;
    // printInvertedSolidPyramid(9);
    // printHollowPyramid(n);
    // printSolidDiamond(n);
    // rightAngledTriangle(n);
    printHollowDiamond(n);

    return 0;
}