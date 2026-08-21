// Queue follows FIFO → First In, First Out.

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.front() << endl;  // 10

    q.pop();

    cout << q.front() << endl;  // 20

    return 0;
}