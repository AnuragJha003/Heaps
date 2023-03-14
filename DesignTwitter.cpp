/*class Twitter {
public:
    Twitter() {
        stack<pair<int,int>>pt;
        stack<pair<int,int>>f;
    }
    //st m push kr skte stack of pair userid and tweet id
    void postTweet(int userId, int tweetId) {
        
    }
    //10 TIMES POP FROM THE STACK AS LIFO 
    vector<int> getNewsFeed(int userId) {
        
    }
    //ONE MORE STACK PAIR INT INT FOR FOLLOWING 
    void follow(int followerId, int followeeId) {
        
    }
    //WHEN UNFOLLOW FIND THIS PAIR FROM STACK OF FOLLOWER AND FOLLOWING LIST AND THEN POP THIS ONE OUT ONLY 
    
    void unfollow(int followerId, int followeeId) {
        
    } 
};*/

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */
class Twitter {
public:
    map<int,priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>> user;
    map<int,set<int>> connect;
    int time=0;
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        user[userId].push({time,tweetId});// stores as (time,tweet) pair to min heap
        time++;  
        if(user[userId].size()>10)// keeping max 10 recents post of a user
            user[userId].pop();
    }
    void fun(priority_queue<pair<int,int>>& pq,int id)//add elements from min heap(id) to max heap(pq)
    {
        vector<vector<int>> temp;
        while(!user[id].empty())
        {
            int a=user[id].top().first;
            int b=user[id].top().second;
            user[id].pop();
            pq.push({a,b});
            temp.push_back({a,b});
        }
        for(auto x:temp)
        {
            user[id].push({x[0],x[1]});
        }
    }
    vector<int> getNewsFeed(int userId) {
        vector<int> v;
        priority_queue<pair<int,int>> pq;
        fun(pq,userId);// user itself
        for(auto x:connect[userId])// posts by followers
        {
            fun(pq,x);
        }
        int i=0;
        while(!pq.empty())
        {
            v.push_back(pq.top().second);
            pq.pop();
            i++;
            if(i==10)
                break;
        }
        return v;
    }
    void follow(int followerId, int followeeId) {
        connect[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        connect[followerId].erase(followeeId);
    }
}; 
https://leetcode.com/problems/design-twitter/
