#include<bits/stdc++.h>
class MedianFinder {
public:
    priority_queue<int> maxpq; //maxHeap
    priority_queue<int, vector<int>, greater<int>> minpq; //minHeap
    
    void addNum(int num) {
            
        if(maxpq.empty() || maxpq.top() > num){//first element or num is the smaller number as compared to max elmnt in heap (matlab left half h smaller elmnts wala ) 
            maxpq.push(num);//so pushed  into maxheap 
        }else{
            minpq.push(num);//else pushed into the minheap 
        }
        
        if(maxpq.size() > minpq.size() + 1){//if size difference of the max heap and minheap is >1 
            minpq.push(maxpq.top());//minheap of smaller size than min heap is pushed by the top maxheap element
            maxpq.pop();//remove that max heap elmnt 
        }
        //SIZES KO EQUAL KRNE K LIYE THIS IF AND ELSE IF CONDITIONS ARE THERE 
        else if(minpq.size() > maxpq.size() + 1){//if minheap >maxheap
            maxpq.push(minpq.top());//...samw with minheap
            minpq.pop();
        }
        
    }
    
    double findMedian() {
       if(maxpq.size() == minpq.size()){//if size of max amd min heap equal then median is avg of the two top elmnts
           return (maxpq.top() + minpq.top()) / 2.0;
       }
        else{
            if(maxpq.size() > minpq.size()){
                return maxpq.top();//if maxheap size during some insertion median is maxh.top
            }else{
                return minpq.top();//else minheap size > during some insertion then 
            }
        }
    }
};
https://leetcode.com/problems/find-median-from-data-stream/
