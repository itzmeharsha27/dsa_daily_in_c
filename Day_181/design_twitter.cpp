#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>
using namespace std;

// Design Twitter

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

    vector<int> getNewsFeed(int userId)
    {
        priority_queue<pair<int, int>> maxHeap;

        for(auto tweet : tweets[userId])
            maxHeap.push({tweet.time, tweet.id});

        for(int user : following[userId])
        {
            for(auto tweet : tweets[user])
                maxHeap.push({tweet.time, tweet.id});
        }

        vector<int> result;

        while(!maxHeap.empty() && result.size() < 10)
        {
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return result;
    }
};

void printFeed(vector<int> feed)
{
    cout << "[";

    for(int i = 0; i < feed.size(); i++)
    {
        cout << feed[i];

        if(i + 1 < feed.size())
            cout << ", ";
    }

    cout << "]" << endl;
}

int main()
{
    Twitter twitter;

    twitter.postTweet(1, 5);

    cout << "Feed after Tweet 5: ";
    printFeed(twitter.getNewsFeed(1));

    twitter.follow(1, 2);

    twitter.postTweet(2, 6);

    cout << "Feed after following User 2: ";
    printFeed(twitter.getNewsFeed(1));

    twitter.unfollow(1, 2);

    cout << "Feed after unfollowing User 2: ";
    printFeed(twitter.getNewsFeed(1));

    return 0;
}