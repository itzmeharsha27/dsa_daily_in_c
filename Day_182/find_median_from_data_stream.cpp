#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Find Median from Data Stream

class MedianFinder
{
private:

    // Smaller half
    priority_queue<int> maxHeap;

    // Larger half
    priority_queue<int, vector<int>, greater<int>> minHeap;

public:

    void addNum(int num)
    {
        // Add to smaller half
        if(maxHeap.empty() || num <= maxHeap.top())
            maxHeap.push(num);
        else
            minHeap.push(num);

        // Balance both heaps
        if(maxHeap.size() > minHeap.size() + 1)
        {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }

        if(minHeap.size() > maxHeap.size())
        {
            maxHeap.push(minHeap.top());
            minHeap.pop();
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

    cout << "Median: "
         << finder.findMedian() << endl;

    finder.addNum(3);

    cout << "Median: "
         << finder.findMedian() << endl;

    return 0;
}