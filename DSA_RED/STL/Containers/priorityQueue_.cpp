#include <iostream> 
#include <queue>

using namespace std;


int main(){
    priority_queue<int> pq; // max heap :=> "Largest element at the top (i.e Gets Highest Priority)"
    pq.push(10);
    pq.push(5);
    pq.push(20);
    cout<<pq.top()<<endl; // 20
    pq.pop();
    cout<<pq.top()<<endl; // 10
    pq.pop();
    cout<<pq.top()<<endl; // 5

    return 0;
}