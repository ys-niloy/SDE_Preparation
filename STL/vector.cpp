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





    // complete code
    vector<int> v;

    for (int i = 0; i < 10; i++)
    {
        v.push_back(i); // inserting elements in the vector
    }

    cout << "the elements in the vector: ";
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    cout << "\nThe front element of the vector: " << v.front();
    cout << "\nThe last element of the vector: " << v.back();
    cout << "\nThe size of the vector: " << v.size();
    cout << "\nDeleting element from the end: " << v[v.size() - 1];
    v.pop_back();

    cout << "\nPrinting the vector after removing the last element:" << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << "\nInserting 5 at the beginning:" << endl;
    v.insert(v.begin(), 5);
    cout << "The first element is: " << v[0] << endl;
    cout << "Erasing the first element" << endl;
    v.erase(v.begin());
    cout << "Now the first element is: " << v[0] << endl;

    if (v.empty())
        cout << "\nvector is empty";
    else
        cout << "\nvector is not empty" << endl;

    v.clear();
    cout << "Size of the vector after clearing the vector: " << v.size();

    return 0;
}