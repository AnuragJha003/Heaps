//K AND CLOSEST ELMNT MEANS MINIMUM ABSOLUTE DIFFERENCE BTW 2 ELMNTS SO ISKO MAX HEAP M STORE KRENGE AS SORTING IS DONE ON THE BASIS OF ABS DIFFERENCE 

class Solution {
public:
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
priority_queue<pair<int,int>>pq;
for(auto ele:arr)
{
pq.push(make_pair(abs(x-ele),ele));
if(pq.size()>k)
{
pq.pop();
}
}//K CLOSEST ELMNT TO X STORED IN HERE 
vector<int> ans;
while(!pq.empty())
{
ans.push_back(pq.top().second);
pq.pop();
}//STORING IT IN AN ARRAY TO GET THE ANSWER IN THE REQUIRED FORMAT 
sort(ans.begin(),ans.end());
return ans;

}
};
https://leetcode.com/problems/find-k-closest-elements/
