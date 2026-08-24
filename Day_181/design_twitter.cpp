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

    void postTweet(int userId, int tweetId)
    {
        tweets[userId].push_back({tweetId, timestamp++});
    }

    void follow(int followerId, int followeeId)
    {
        following[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId)
    {
        following[followerId].erase(followeeId);
    }
};

int main()
{
    Twitter twitter;

    twitter.postTweet(1, 5);

    twitter.follow(1, 2);
    twitter.unfollow(1, 2);

    return 0;
}