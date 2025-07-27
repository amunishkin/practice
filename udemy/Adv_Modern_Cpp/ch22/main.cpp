#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1,2,3,4,5};

    cout << "C++ version: " << __cplusplus << endl;

    // Older C++
    auto iter1 = begin(vec);
    if (iter1 != end(vec)) {
        cout << "First element i1: " << *iter1 << endl;
    }

    // C++17
    if (auto iter2 = begin(vec); iter2 != end(vec)) {
        cout << "First element i2: " << *iter2 << endl;
    }
}