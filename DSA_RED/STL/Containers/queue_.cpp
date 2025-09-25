#include <iostream>
#include <queue>

using namespace std;


int main(){
    
    queue<int> q1;
    queue<int> q2;
    // Pushing elements into the queue
    for (int i = 1; i <= 5; i++){
        q1.push(i);
    }


    q2.swap(q1);


    // Printing q1:
    cout << "q1:=>\n";
    while(!q1.empty()){
        cout << q1.front() << " ";
        q1.pop();
    }
    
    // Printing q2:
    cout << "\nq2:=>\n";
    while (!q2.empty()){
        cout << q2.front() << " ";
        q2.pop();
    }


   
    return 0;
}