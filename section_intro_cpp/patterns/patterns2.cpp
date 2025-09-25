#include <iostream>
using namespace std;

int main()
{
  // #2.1
  // "Square Pattern"
  // for (int i = 0; i < 4; i++){

  //     for (int k = 0; k < 4; k++){
  //         cout << "*";
  //     }
  //     cout << endl;
  // }

  // #2.2
  // "Rectangle Pattern: (3 x 6) = (Length x Breadth)"
  // int length, breadth;
  // cin >> length >> breadth;

  // for (int i = 0; i < length; i++) {
  //     for (int k = 0; k < breadth; k++){
  //         cout << " * ";
  //     }
  //     cout << endl;
  // }

  // #2.3
  /////////////////////////////////////////////////////////////
  // "Hollow Rectangle"
  /////////////////////////////////////////////////////////////
  
  // #2.3.1
  // Way 01:
  // int length, breadth;
  // for (int i = 0; i < length; i++)
  // {
  //     // cout << " | ";
  //     for (int k = 0; k < breadth; k++)
  //     {
  //         if ((i == 0) || (i == length - 1))
  //         {
  //             cout << " * ";
  //         }
  //         else
  //         {
  //             if (k == 0 || k == breadth - 1)
  //             {
  //                 cout << " * ";
  //             }
  //             else
  //             {
  //                 cout << "   ";
  //             }
  //         }
  //     }
  //     // cout << " | ";
  //     cout << "\n";
  // }
  //

  // Way 02:
  // int length, breadth;
  // cin >> length >> breadth;
  // for (int i = 0; i < length; i++)
  // {
  //   for (int k = 0; k < breadth; k++)
  //   {
  //     if (i == 0 || i == length - 1 || k == 0 || k == (breadth - 1))
  //     {
  //       cout << " * ";
  //     }
  //     else {
  //       cout << "   ";
  //     }
  //   }
  //   cout << endl;
  // }

  /////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////

  // DATE: 27nd Feb 2025
  // 2.4.1
  // Hollow Square
  // NOTE:
  // int n;
  // cin >> n;

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     if (i == 0 || i == (n - 1))
  //     {
  //       cout << " * ";
  //     }
  //     else
  //     {
  //       if (j == 0 || j == (n - 1))
  //       {
  //         cout << " * ";
  //       }
  //       else
  //       {
  //         cout << "   ";
  //       }
  //     }
  //   }
  //   cout << "\n";
  // }

  // 2.4.2
  // Hollow Square  Version 02 Code
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n; j++) {
  //     if (i == 0 || i == (n-1) || j == 0 || j == (n-1)) {
  //       cout << " * ";
  //     } else {
  //       cout << "   ";
  //     }
  //   }
  //   cout << "\n";
  // }

  return 0;
}
