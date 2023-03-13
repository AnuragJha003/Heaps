/*class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<double,vector<double>,greater<double>>  pq; //MIN HEAP CREATE KIYE H WHERE WE WILL STORE THE DISTANCES OF ALL POINTS AVAILABLE
        //TOP K POINTS POP OUT KRENEG AND STORE IN VECTOR VECTOR AND RETURN THE RESULT 
        for(auto x:points){
            double dis=sqrt(x[0]*x[0] + x[1]*x[1]);
            pq.push(dis);
        }
        while(k--){
            pq.pop();
        }
        vector<vector<double>> v;
        while(pq.size()>0){
            v.push_back(pq.top());
            pq.pop();
        }
        return v;
        
    }
};*/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        priority_queue<pair<double,vector<int>>,vector<pair<double,vector<int>>>,greater<pair<double,vector<int>>>> pq;//MIN HEAP OF PAIRS CREATED
        for(int i=0;i<n;i++){
            double num = sqrt(points[i][0]*points[i][0] + points[i][1]*points[i][1]);
            pq.push({num, points[i]});//DISTANCE CALUCATE KRKE PUSH BACK AS A PAIR  IN MIN HEAP VECTOR 
        }
        vector<vector<int>> ans;//ANSWER VECTOR 
        while(k--){
            ans.push_back(pq.top().second);//PUSH BACK INTO THE ANSWER  WITH THE SECOND OF PAIR POINTING TO THE COORDINATES OF POSITION WHOSE DISTANCE IS LEAST FROM ORIGIN
            pq.pop();//REMOVE THAT
        }//K TIMES THE SAME OPERATION
        return ans;
    }
};//MAX HEAP CREATE KRKE >K THEN POP OUT WE WILL BE LEFT WITH CLOSEST ELMNTS AND WHILE SIZE>0 PAIR.SECOND PUSHED BACK IN THE VECTOR AND THEN POP

https://leetcode.com/problems/k-closest-points-to-origin/
