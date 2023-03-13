class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map <int,int> map;//UNORDERED MAP USEW TO FIND FREQ OF ELEMENTS
        for(int i=0 ; i<nums.size() ; i++){
            map[nums[i]]++;
        }//MAP STORES THE COUNT OF NUMS[I] FREQUENCY OF CHARACTERS OR NUMBERS MEASURED HERE
        
        vector<int> ans;
        //AS TOP K FREQUNCY ELMNT ASKED SO TOP MEANS JYADA MEANS K MAXIMUM FREQUENT ELMNTS 
        priority_queue <pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;//MIN HEAP OF PAIR MADE
        for(auto itr:map){
            pq.push({itr.second,itr.first});
            
        while(pq.size()>k){
            pq.pop();
        }
        }
        while(pq.size()>0){
        ans.push_back(pq.top().second);//ELMNT PUSHED BACK INTO THE VECTOR
        ]
        return ans;
    }//ALWAYS THI7NK OF MAP WHEN FREQ IS ASKED AND USE MAX/MIN HEAP OF A PAIR WHENEVR SOMETHING MAX/MIN TYPE RELATED TO OCCURANCE TAKES PLACE AND NEEDS TO BE RETURNED BY SUPPOSE K NO OF OPERATIONS AND ALL 
};



















class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map <int,int> map;//UNORDERED MAP USEW TO FIND FREQ OF ELEMENTS
        for(int i=0 ; i<nums.size() ; i++){
            map[nums[i]]++;
        }//MAP STORES THE COUNT OF NUMS[I] FREQUENCY OF CHARACTERS OR NUMBERS MEASURED HERE
        /*unordered_map<int,int> mpl
        for(int i=0;i<v.size();i++){
        m[v[i]]++;
        }*/
        
        vector<int> ans;
        priority_queue <pair<int,int>> pq;//MAX HEAP OF PAIR MADE
        for(auto itr:map){
            pq.push({itr.second,itr.first});
        }//MAX HEAP OF PAIRS IN WHICH PAIR'S FIRST VALUE IS THE MOST REPEATED CHAR AND THE SECOND VALUE IS MAP'S FIRST THAT IS THE OCCURACE AND MAX HEAP IS SORTED BY OCCURANCE HERE
        
        while(k-- && pq.size()>0){
            ans.push_back(pq.top().second);//PUSHED BACK THE MOST REPEATING CHAR AND PQ.TOP IS THE PAIR HAVING CHARACTER IN IT STORED WITH THE MAXIMUM FREQUENCY IN IT 
            pq.pop();//REMOVE THAT PAIR ALREADY CONSIERED 
        }
        return ans;
    }//ALWAYS THI7NK OF MAP WHEN FREQ IS ASKED AND USE MAX/MIN HEAP OF A PAIR WHENEVR SOMETHING MAX/MIN TYPE RELATED TO OCCURANCE TAKES PLACE AND NEEDS TO BE RETURNED BY SUPPOSE K NO OF OPERATIONS AND ALL 
};
  
  https://leetcode.com/problems/top-k-frequent-elements/
