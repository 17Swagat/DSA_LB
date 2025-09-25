#include <iostream>

using namespace std;

int main() {

  // #1
  // "Pyramid"
  // @ME:

  /*int n;*/
  /*cin >> n;*/
  /**/
  /*// 4 spaces , 1 **/
  /*// 3 spaces , 2 **/
  /*// 2 spaces , 3 **/
  /*// 1 spaces , 4 **/
  /*// 0 spaces , 5 **/
  /**/
  /*// Answer:*/
  /*for (int i = 0; i < n; i++) {*/
  /*  for (int k = n; k > 0; k--) {*/
  /*    if (k > i + 1) {*/
  /*      cout << " ";*/
  /*    } else*/
  /*      cout << "* ";*/
  /*  }*/
  /*  cout << "\n";*/
  /*}*/

  // --------------------------------------------------------------

  // #1.2
  // Instructor:
  /*int n;*/
  /*cin >> n;*/
  /*// "Used 2 Loops to solve the problem"*/
  /*for (int i = 0; i < n; i++) {*/
  /*  // Loop: To print SPACES*/
  /*  for (int k = 0; k < n - i - 1; k++) {*/
  /*    cout << " ";*/
  /*  }*/
  /*  // Loop: To print   **/
  /*  for (int k = 0; k < (i + 1); k++) {*/
  /*    cout << "* ";*/
  /*  }*/
  /**/
  /*  cout << endl;*/
  /*}*/

  // #####################################################################

  // # 2.
  // Inverted Pyramid
  /*int n;*/
  /*cin >> n;*/
  // 0 spaces, 5 stars
  // 1 spaces, 4 stars
  // 2 spaces, 3 stars
  // 3 spaces, 2 stars
  // 4 spaces, 1 stars
  // 5 spaces, 0 stars

  // @ME:
  /*for (int i = 0; i < n; i++) {*/
  /*  for (int k = 0; k < n; k++) {*/
  /*    if (k < i) {*/
  /*      cout << " ";*/
  /*    } else {*/
  /*      cout << "* ";*/
  /*    }*/
  /*  }*/
  /*  cout << "\n";*/
  /*}*/

  // Intructor:
  /*for (int i = 0; i < n; i++) {*/
  /*  for (int k = 0; k < i; k++) {*/
  /*    cout << " ";*/
  /*  }*/
  /*  for (int k = i; k < n; k++) {*/
  /*    cout << "* ";*/
  /*  }*/
  /*  cout << "\n";*/
  /*}*/

  // #####################################################################

  // 3.
  // Diamond
  //      *
  //     * *
  //    * * *
  //   * * * *
  //  * * * * *
  //  * * * * *
  //   * * * *
  //    * * *
  //     * *
  //      *

  /*int n;*/
  /*cin >> n;*/
  /*// @ME:*/
  /**/
  /*// Top: "PYRAMID"*/
  /*// 4 spaces , 1 **/
  /*// 3 spaces , 2 **/
  /*// 2 spaces , 3 **/
  /*// 1 spaces , 4 **/
  /*// 0 spaces , 5 **/
  /*for (int i = 0; i < n; i++) {*/
  /*  for (int k = n; k > 0; k--) {*/
  /*    if (k > (i)) {*/
  /*      cout << " ";*/
  /*    } else {*/
  /*      cout << "* ";*/
  /*    }*/
  /*  }*/
  /*  cout << "\n";*/
  /*}*/
  /**/
  /*// Bottom: "INVERTED PYRAMID"*/
  /*// 0 spaces, 5 stars*/
  /*// 1 spaces, 4 stars*/
  /*// 2 spaces, 3 stars*/
  /*// 3 spaces, 2 stars*/
  /*// 4 spaces, 1 stars*/
  /*// 5 spaces, 0 stars*/
  /*for (int i = 0; i < n; i++) {*/
  /*  for (int k = 0; k < n; k++) {*/
  /*    if (k < i)*/
  /*      cout << " ";*/
  /*    else*/
  /*      cout << "* ";*/
  /*  }*/
  /*  cout << "\n";*/
  /*}*/

  // #####################################################################
  //
  // 4.
  // "Hollow Pyramid"
  //
  // For, n = 5
  //     *
  //    * *
  //   *   *
  //  *     *
  // * * * * *

  // For, n = 6
  //       *
  //      * *
  //     *   *
  //    *     *
  //   *       *
  //  * * * * * *

  /*int n;*/
  /*cin >> n;*/
  // @ME:
  // -------------------------------------------------
  // My_1st Solution: "First Success on this problem"
  // -------------------------------------------------
  /*for (int i = 0; i < n; i++) {*/
  /*  if (i == 0) {*/
  /*    for (int k = 0; k < (n - 1); k++) {*/
  /*      cout << " ";*/
  /*    }*/
  /*    cout << "* ";*/
  /*  } else if (i == (n - 1)) {*/
  /*    for (int k = 0; k < n; k++) {*/
  /*      cout << "* ";*/
  /*    }*/
  /*  } else {*/
  /*    // pre-spaces*/
  /*    for (int k = 1; k <= (n - i - 1); k++) {*/
  /*      cout << " ";*/
  /*    }*/
  /*    // star*/
  /*    cout << "* ";*/
  /*    // in-between spaces*/
  /*    for (int k = 1; k <= 2 * (i - 1); k++) {*/
  /*      cout << " ";*/
  /*    }*/
  /**/
  /*    cout << "* ";*/
  /*  }*/
  /*  cout << "\n";*/
  /*}*/

  // -------------------------------------------------
  // @ME:
  // "Alt Solution"
  /*for (int i = 0; i < n; i++) {*/
  /*  // pre-spaces*/
  /*  for (int k = 0; k < (n - i - 1); k++) {*/
  /*    cout << " ";*/
  /*  }*/
  /**/
  /*  // pre-star*/
  /*  cout << "* ";*/
  /**/
  /*  // middle spaces*/
  /*  if (i != 0 && i != (n - 1)) {*/
  /*    for (int k = 0; k < 2 * (i - 1); k++)*/
  /*      cout << " ";*/
  /*    cout << "* ";*/
  /*  }*/
  /**/
  /*  if (i == (n - 1)) {*/
  /*    for (int k = 0; k < n - 1; k++) {*/
  /*      // NOTE: @ME : "(k < n-1) is used becoz for the last the row, 1 star
   * has*/
  /*      // already been printed above (as the pre-star)"*/
  /*      cout << "* ";*/
  /*    }*/
  /*  }*/
  /*  cout << "\n";*/
  /*}*/

  // -------------------------------------------------

  // #####################################################################

  // 5.
  // "Inverted Hollow Pyramid"

  // * * * * *
  //  *     *
  //   *   *
  //    * *
  //     *

  int n;
  cin >> n;
  // Me: "First Attempt"
  for (int i = 0; i < n; i++) {
  }

  return 0;
}
