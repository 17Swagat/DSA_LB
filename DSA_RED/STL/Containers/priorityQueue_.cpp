#include <iostream> 
#include <queue>

using namespace std;


int main(){
    priority_queue<int> pq; // max heap :=> "Largest element at the top (i.e Gets Highest Priority)"

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(22);

    //*  iterating through the priority queue is not possible
    while (!pq.empty()) {
        cout << pq.top() << " "; // 30 22 20 10
        pq.pop();
    }


    return 0;
}