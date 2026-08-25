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

        if(maxHeap.top() > minHeap.top())
        {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }

        if(maxHeap.size() > minHeap.size() + 1)
        {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
    }

    double findMedian()
    {
        if(maxHeap.size() > minHeap.size())
            return maxHeap.top();

        return (maxHeap.top() + minHeap.top()) / 2.0;
    }
};

int main()
{
    MedianFinder finder;

    finder.addNum(1);
    finder.addNum(2);

    cout << finder.findMedian() << endl;

    return 0;
}