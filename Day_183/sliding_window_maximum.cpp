#include <iostream>
#include <vector>
#include <deque>
using namespace std;

// Sliding Window Maximum
// Using Monotonic Deque

vector<int> maxSlidingWindow(vector<int>& nums, int k)
{
    deque<int> dq;
    vector<int> result;

    for(int i = 0; i < nums.size(); i++)
    {
        // Remove elements outside current window
        if(!dq.empty() && dq.front() <= i - k)
        {
            dq.pop_front();
        }

        // Remove smaller elements from back
        // because they can never become maximum
        while(!dq.empty() && nums[dq.back()] <= nums[i])
        {
            dq.pop_back();
        }

        // Store current index
        dq.push_back(i);

        // Start recording maximums
        if(i >= k - 1)
        {
            result.push_back(nums[dq.front()]);
        }
    }

    return result;
}

int main()
{
    vector<int> nums = {
        1, 3, -1, -3,
        5, 3, 6, 7
    };

    int k = 3;

    vector<int> result =
        maxSlidingWindow(nums, k);

    cout << "Sliding Window Maximum: ";

    for(int value : result)
    {
        cout << value << " ";
    }

    cout << endl;

    return 0;
}