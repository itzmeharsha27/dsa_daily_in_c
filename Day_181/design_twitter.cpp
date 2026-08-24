#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

struct Tweet
{
    int id;
    int time;
};

class Twitter
{
private:
    unordered_map<int, vector<Tweet>> tweets;
    unordered_map<int, unordered_set<int>> following;

    int timestamp = 0;

public:

    Twitter()
    {
    }

    void postTweet(int userId, int tweetId)
    {
        tweets[userId].push_back({tweetId, timestamp++});
    }
};

int main()
{
    Twitter twitter;

    twitter.postTweet(1, 5);

    return 0;
}