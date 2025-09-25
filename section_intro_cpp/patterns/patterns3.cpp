#include <iostream>

using namespace std;

int main()
{
    // 1.
    // "Half Pyramid"
    //
    // int height;
    // cin >> height;
    // for (int i = 0; i < height; i++) {
    //     for (int k = 0 ; k < (i+1); k++) {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }

    // 2.
    // Diagonal Pattern
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         if (i == j) {
    //             cout << "* ";
    //         } else {
    //             cout << "  ";
    //         }
    //     }
    //     cout << "\n";
    // }

    // 3.
    // Inverted Half Pyramid
    // int n;
    // cin >> n;

    // 3.1
    // for (int i = n; i > 0; i--){
    //     for (int j = 0; j < i; j++) {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }

    // 3.2
    // for (int i = 0; i < n; i++) {
    //     for (int j= n ; j > i; j--) {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }

    // 4.
    // Hollow Half Pyramid
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < (i+1); j++){
    //         if ((j == 0) || (j == i) || (i == (n-1))){
    //             cout << "* ";
    //         }
    //         else {
    //             cout << "  ";
    //         }
    //     }
    //     cout << "\n";
    // }

    // 5.
    // Inverted Hollow Pyramid
    // * * * * *
    // *     *
    // *   *
    // * *
    // *
    // int n;
    // cin >> n;

    // 5.1 Method 1 @ME
    // for (int i = 0; i < n; i++) {
    //     for (int k = 0; k < n-i; k++){
    //         if (i == 0) {
    //             cout << " * ";
    //         }
    //         else {
    //             if (k == 0 || k == (n-i-1)) {
    //                 cout << " * ";
    //             } else {
    //                 cout << "   ";
    //             }
    //         }
    //     }
    //     cout << "\n";
    // }


    
    // 6.0
    // Numeric Half Pyramid
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4

    // @ME:
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++){
    //     for (int k = 0; k < (i+1); k++){
    //         cout << k+1 << " ";
    //     }
    //     cout << "\n";
    // }


    // 7.0
    // Numeric Inverted pyramid
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < (n-i); k++){
            cout << k+1 << " ";
        }
        cout << "\n";
    }





    // REVISION 01:
    // * * * * *
    //   *     *
    //     *   *
    //       * *
    //         *
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int k = 0; (k < n);k++){
    //         if (i == 0) {
    //             cout << " * ";
    //         } else {
    //             if (k == i || k == (n-1)){
    //                 cout << " * ";
    //             } else {
    //                 cout << "   ";
    //             }
    //         }
    //     }
    //     cout << "\n";
    // }


    // *
    // @ME:
    // Pattern 5
    // * * * * *
    //   * * * *
    //     * * *
    //       * *
    //         *



    return 0;
}