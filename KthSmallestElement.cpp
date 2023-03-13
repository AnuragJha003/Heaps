class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<r+1;i++){
            pq.push(arr[i]);
        }
        int z=k-1;
        while(z--){
            pq.pop();
        }
        return pq.top();
        
        
    }
};
{
priority_queue<int>pq;
for(int i=0;i<n;i++){
pq.push(arr[i]);
while(pq.size()>k){
pq.pop();
}
}
return pq.top();
}
