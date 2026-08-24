#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>
using namespace std;

// Design Twitter
// Hash Map + Set + Priority Queue

struct Tweet
{
    int id;
    int time;

    Tweet(int tweetId, int timestamp)
    {
        id = tweetId;
        time = timestamp;
    }
};

class Twitter
{
private:

    // userId -> list of tweets
    unordered_map<int, vector<Tweet>> tweets;

    // userId -> users they follow
    unordered_map<int, unordered_set<int>> following;

    int timestamp = 0;

public:

    // Post a tweet
    void postTweet(int userId, int tweetId)
    {
        tweets[userId].push_back(
            Tweet(tweetId, timestamp++)
        );
    }

    // Follow another user
    void follow(int followerId, int followeeId)
    {
        if(followerId != followeeId)
            following[followerId].insert(followeeId);
    }

    // Unfollow another user
    void unfollow(int followerId, int followeeId)
    {
        following[followerId].erase(followeeId);
    }

    // Get 10 most recent tweets
    vector<int> getNewsFeed(int userId)
    {
        priority_queue<pair<int, int>> maxHeap;

        // Add user's own tweets
        for(const Tweet& tweet : tweets[userId])
        {
            maxHeap.push(
                {tweet.time, tweet.id}
            );
        }

        // Add tweets from followed users
        for(int user : following[userId])
        {
            for(const Tweet& tweet : tweets[user])
            {
                maxHeap.push(
                    {tweet.time, tweet.id}
                );
            }
        }

        vector<int> result;

        // Get latest 10 tweets
        while(!maxHeap.empty() &&
              result.size() < 10)
        {
            result.push_back(
                maxHeap.top().second
            );

            maxHeap.pop();
        }

        return result;
    }
};

void printFeed(const vector<int>& feed)
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

    cout << "Feed: ";
    printFeed(twitter.getNewsFeed(1));

    twitter.follow(1, 2);

    twitter.postTweet(2, 6);

    cout << "After Follow: ";
    printFeed(twitter.getNewsFeed(1));

    twitter.unfollow(1, 2);

    cout << "After Unfollow: ";
    printFeed(twitter.getNewsFeed(1));

    return 0;
}