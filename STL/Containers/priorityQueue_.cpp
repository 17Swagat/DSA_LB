#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // min-heap
    priority_queue<int,vector<int>,greater<int>>pq; // min-heap

    pq.push(10);
    pq.push(5);
    pq.push(20);    
    pq.push(15);

    while (!pq.empty()) {
        cout << pq.top() << " "; // 5 10 15 20
        pq.pop();
    }

    return 0;
}