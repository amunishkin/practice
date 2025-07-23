#include <iostream>
#include <string>
#include <vector>

using namespace std;

//typdef vector<int> IntVec;
using IntVec = vector<int>;

void print(const vector<int>& vec)
{
    for (auto v : vec) {
        cout << v << ", ";
    }
    cout << endl;
}

int main()
{
    int x{7};                   // Equivalent to int x = 7;
    string s{"Let us begin"};   // Equivalent to string s("Let us begin")

    cout << "x = " << x << endl;
    cout << "s = \"" << s << "\"" << endl;

    // Can be used with multiple initial values
    vector<int> vec{4, 2, 3, 5, 1};

    cout << "vec = ";
    print(vec);

    return 0;
}