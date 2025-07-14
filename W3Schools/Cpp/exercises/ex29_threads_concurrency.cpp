// C++ Program to illustrate the use of multiple thread
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>
using namespace std;

// shared resource that will be updated
int sum = 0;
// mutex lock for synchronization (althout application can
// work just fine without it in this case, it is still used
// for demonstration)
mutex lck;

// function to get sum of the vector elements in the given
// range
void getSum(const vector<int>& v, int start, int end)
{
    // a predefined wrapper over mutex lock
    //lock_guard<mutex> mu(lck);
    lck.lock();

    // performing operation
    for (int i = start; i <= end; i++) {
        sum += v[i];
    }

    // mu object will automatically release the mutex lock
    // lck when destroyed
    lck.unlock();
}

// driver code
int main()
{
    // vector with 10 elements
    vector<int> v
        = { 2, 4654, 321, 65, 32, 165, 432, 2, 16, 54 };

    // finding mid point
    int mid = v.size() / 2;

    // creating two threads
    // one thread to add first half elements
    thread t1(getSum, v, 0, mid);
    // other thread to add second half elements
    thread t2(getSum, v, mid + 1, v.size() - 1);

    // waiting for threads to finish
    t1.join();
    t2.join();

    cout << "Array Elements: ";
    for (auto i : v) {

        cout << i << " ";
    }
    cout << endl;

    // printing sum
    cout << "Sum: " << sum; //5743

    return 0;
}