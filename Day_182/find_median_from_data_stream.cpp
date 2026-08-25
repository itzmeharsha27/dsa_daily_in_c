#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class MedianFinder
{
private:
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

public:

    void addNum(int num)
    {
        maxHeap.push(num);
    }

    double findMedian()
    {
        return 0.0;
    }
};

int main()
{
    MedianFinder finder;

    finder.addNum(1);
    finder.addNum(2);

    return 0;
}