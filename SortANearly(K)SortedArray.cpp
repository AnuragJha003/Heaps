vector<int> f(vector<int>a ,int k){
//NEARLY SORTED ARRAY CORRECT INDEX OF ELMNT IS +- K INDEX 
//NORMAL SORT BY NLOGN AND BY USING MIN HEAP WE R SORTING ONLY K ELMNTS BY NLOGK
priority_queue<int,vector<int>,greater<int>>pq;
vector<int>ans(a.size());
for(int i=0;i<n;i++){
while(pq.size()>k){
ans.push_back(pq.top());
pq.pop();
}
pq.push(arr[i]);
}
//N-K ELMNTS ARE STORED IN ANS IN THEIR CORRECTLY SORTED WAY AS IN NEARLY SORTED CORRECT ELMNT FOR INDEX I IS AT I+- K POSITIONS 
//SORT KRNE SE I+-K POSIITON M SABSE MINIMUM ELMNT AAYEGA AT THAT POSITION
while(pq.size()>0){
ans.pb(pq.top());
pq.pop();
}
//STORING THE REMAINING K ELMNTS IN THE CORRECT POSITION
return ans;
}

