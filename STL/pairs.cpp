#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> myPair = {1, 4};

    cout << myPair.second << " " << myPair.first << endl;

    //pair inside of a pair
    pair<int, pair<int, int>> iPair = {3, {5, 6}};

    cout << iPair.second.first << " " << iPair.first << endl;


    //array of pair type
    pair<int, int> array[] = {{1, 2}, {2, 3}, {3,4}};

    cout << array[2].first;

}