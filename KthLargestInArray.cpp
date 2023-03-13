class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;//MAX HEAP 
        for(auto x : nums){
            pq.push(x);//NUMS IS PUSHED IN HEAP IN DESC ORDER WITH TOPMOST ELMET AT THE TOP
        }
        int r = k-1;//NUMBER OF OPERATIONS 
        while(r--){
            pq.pop();//POPPING OUT THE 1ST,,,2ND AND TILL K IS REACHED GREATER ELEMNETS
        }
        int ans = pq.top();//NOW AFTER REMOVAL OF K-1 ELEMNTS GREATER THE KTH TOPMOST/HERE GRETATER ELEMNT 
        return ans;//RETURN THE ANS 
    }
};//KTH LARGEST KE LIYE MAX HEAP SIMIARLY DECLARE A MIN HEAP FOR THE QUESTION KTH SMALLEST ELEMENT


https://leetcode.com/problems/kth-largest-element-in-an-array/

priority_queue<int,vector<int>,greater<int>>pq;
for(int i=0;i<n;i++){
pq.push(arr[i]);
while(pq.size()>k)pq.pop();
}
return pq.top();//KTH LARGEST ELMNT 
//IF TO PRINT K LARGEST ELMNTS
vector<int> v;
while(pq.size()){
v.pb(pq.top());
pq.pop();
}
reverse(v.begin(),v.end());
return v;
