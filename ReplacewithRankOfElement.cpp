class Solution{
public:

    vector<int> replaceWithRank(vector<int> &arr, int N){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;//MIN HEAP
        for(int i=0;i<N;i++){
            pq.push({arr[i],i});
        }
        vector<int> ans(N);
        int prev=pq.top().first;
        int ind=pq.top().second;
        int c=1;
        ans[ind]=c;
        //i++;
        pq.pop();
        while(pq.size()>0){
            if(pq.top().first==prev){
                int ind=pq.top().second;
                ans[ind]=c;
                //i++;
            }
            else{
                int ind=pq.top().second;
                c++;
                ans[ind]=c;
                //i++;
            }
            prev=pq.top().first;
            pq.pop();
        }
        return ans;
    }

};
https://practice.geeksforgeeks.org/problems/replace-elements-by-its-rank-in-the-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=replace-elements-by-its-rank-in-the-array
