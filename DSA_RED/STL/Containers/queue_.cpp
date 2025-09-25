#include <iostream>
#include <queue>

using namespace std;


int main(){
    
    // What's wrong?
    // queue<int> q = {1, 2, 3, 4, 5}; // ❌ [Error:]
    // [Correct way]:=>
    queue<int> q;
    // Pushing elements into the queue
    for (int i = 1; i <= 5; i++){
        q.push(i);
    }

    // Last Element in Queue
    cout << "Last Element: " << q.back() << endl;   // 5

    // Unlike vectors/lists, in order to tranverse a queue, we have to pop elements
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();    
    }


    return 0;
}