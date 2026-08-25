#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Find Median from Data Stream
// Using Two Heaps

class MedianFinder
{
private:

    // Max heap stores the smaller half
    priority_queue<int> maxHeap;

    // Min heap stores the larger half
    priority_queue<int, vector<int>, greater<int>> minHeap;

public:

    // Add number to the data stream
    void addNum(int num)
    {
        // Decide which heap should contain the number
        if(maxHeap.empty() || num <= maxHeap.top())
        {
            maxHeap.push(num);
        }
        else
        {
            minHeap.push(num);
        }

        // Keep the heaps balanced
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

    // Find current median
    double findMedian()
    {
        // Odd number of elements
        if(maxHeap.size() > minHeap.size())
        {
            return maxHeap.top();
        }

        // Even number of elements
        return (maxHeap.top() + minHeap.top()) / 2.0;
    }
};

int main()
{
    MedianFinder finder;

    finder.addNum(1);
    cout << "Median: "
         << finder.findMedian() << endl;

    finder.addNum(2);
    cout << "Median: "
         << finder.findMedian() << endl;

    finder.addNum(3);
    cout << "Median: "
         << finder.findMedian() << endl;

    finder.addNum(4);
    cout << "Median: "
         << finder.findMedian() << endl;

    return 0;
}