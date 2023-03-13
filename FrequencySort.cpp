typedef pair<int,int> ppi;
class Solution {
public:
vector<int> frequencySort(vector<int>& nums) {
vector<int> ans;
unordered_map<int,int> fq;
priority_queue<ppi> pq; //maxheap
for(int i=0; i<nums.size(); i++){
fq[nums[i]]++;
}
for(int i=0; i<nums.size(); i++){
pq.push({fq[nums[i]],nums[i]});
}
vector<int> ans;
while(pq.size()>0){
int freq=pq.top().first;
int ele=pq.top().second;
for(int i=1;i<=freq;i++){
ans.pb(ele);
}
pq.pop();
}
return ans;
}

//1 2 1 1 2 3 4
//after sorting 1 1 1 2 2 3 4 


https://leetcode.com/problems/sort-array-by-increasing-frequency/
//A MODIFIED VERSION OF THE ABOVE Q
