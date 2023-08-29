#include <bits/stdc++.h>
using namespace std;
void printdeque(deque<int> dq)
{
    deque<int>::iterator it;
    for (it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(4);
    dq.push_front(7);
    dq.push_front(15);
    dq.push_front(23);

    cout << "The elements in the deque are: ";
    printdeque(dq);

    cout << "The size of the deque is: " << dq.size() << endl;
    cout << "The first element in the deque: " << dq.front() << endl;
    cout << "Deleting the first element" << endl;
    dq.pop_front();
    printdeque(dq);
    cout << "The last element of the deque: " << dq.back() << endl;
    cout << "Deleting the last element" << endl;
    dq.pop_back();
    printdeque(dq);

    return 0;
}
