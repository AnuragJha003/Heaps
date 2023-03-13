int f(vector<int> arr){
int cost=0;
priority_queue<int,vector<int>,greater<int>> pq;//MIN HEAP 
for(int i=0;i<n;i++){
pq.push(arr[i]);
}
while(pq.size()>=2){
int a=pq.top();
pq.pop();
int b=pq.top();
pq.pop();
cost=cost+(a+b);
pq.push(a+b);
}
return cost;
}
https://www.geeksforgeeks.org/connect-n-ropes-minimum-cost/
