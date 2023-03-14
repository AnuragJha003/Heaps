class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> pq;//MIN HEAP
    int size;
    KthLargest(int k, vector<int>& nums) {
        size=k;//THE SIZE TILL MAX ALLOWED
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);//PUSHING IN THE MIN HEAP THESE VALUES
            if(pq.size()>k){
                pq.pop();//ELEMENT REMOVED HO GYA FORM THE MIN HEAP IF SIZE EXCEED KR GYA H OKK
            }
        }
    }
    
    int add(int val) {
        pq.push(val);//PUSHED INTO MIN HEAP
        if(pq.size()>size){//SIZE IS USED BCZ  K IS A LOCLA VARIBALE AND SIZE ASSIGNED TO IT IS GLOBASL
            pq.pop();
        }
        return pq.top();//THE TOPMOST ELEMTN IN THE MIN HEAP IS THE KTH LARGEST ELEMTN TILL THAT POINT AS THE MIN HEAP IS POPPING OUT THE SMALLEST ELEMTN IN IT 
    }
};
https://leetcode.com/problems/kth-largest-element-in-a-stream/#:~:text=Implement%20KthLargest%20class%3A,largest%20element%20in%20the%20stream.
