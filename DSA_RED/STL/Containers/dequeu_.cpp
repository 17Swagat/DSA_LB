#include <iostream> 
#include <deque>

using namespace std;

/*
 Deque: Double Ended Queue
    Allows insertion and deletion from both ends
    Implemented as a dynamic array of fixed-size arrays
    Provides random access to elements
    More memory overhead compared to vector
    Suitable for scenarios requiring frequent insertions and deletions at both ends
    
    Time Complexity:
        Insertion/Deletion at both ends: O(1)
        Random Access: O(1)
 */

int main(){
    // #1
    deque<int> d = {1, 2, 3};
    for (int i = 0; i < d.size(); i++){
        cout << d[i] << " "; // Output: 1 2 3
    }

    cout << "\n";

    // #2
    d.push_back(4); // Insert at the back
    d.push_front(0); // Insert at the front
    for (int i = 0; i < d.size(); i++){
        cout << d.at(i) << " "; // Output: 0 1 2 3 4
    }

    return 0;
}