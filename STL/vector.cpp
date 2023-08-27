#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    // pushes 23 in the vector
    v.push_back(23);

    // sets the size of the vector to 5 and stores elements of the integer 10
    vector<int> v2(5, 10);

    cout << v[0] << endl;

    // copying a vector to another vector
    vector<int> vCopy(v2);

    // an iterator stores the address of the vector
    vector<int>::iterator iv = v2.begin();

    // moves to the next element
    iv++;

    // prints the second element
    cout << *(iv) << endl;

    // different ways of printing the vectors

    for (int i = 0; i < vCopy.size(); i++)
    {
        cout << vCopy[i] << " ";
    }
    cout << endl;

    // another way
    for (auto it = v2.begin(); it != v2.end(); it++)
    {
        cout << *(it) << " ";
    }

    // yet another way
    for (auto it : v)
    {
        cout << it << " ";
    }

    
    return 0;
}
