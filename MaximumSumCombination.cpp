//ONE OF THE FINEST HEAPS QUESTION 
class Solution {
  public:
    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        // code here
        /*priority_queue<int,vector<int>,greater<int>> pq;
        vector<int> ans;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
            pq.push(A[i]+B[j]);
            if(pq.size()>K){
                pq.pop();
            }
        }
        }
        while(pq.size()>0){
            ans.push_back(pq.top());
            pq.pop();
        }
        sort(ans.begin(),ans.end(),greater<int>());
        return ans;*/
           priority_queue<pair<int,pair<int,int>>> pq;

        sort(A.begin(),A.end());

        sort(B.begin(),B.end());

        for(int i=0;i<N;i++)

        {

            pq.push({A[i]+B[N-1],{i,N-1}});

        }//for pushing the first possible combination 
        //that is A ke all elmnts are summed up with the largest elmnt of the array B
        //MAX HEAP OF PAIR OF (SUM),(INDEX OF A,INDEX OF B)

        vector<int> ans;

        while(!pq.empty() && K--)

        {//FOR K VALID MAX 

            auto it=pq.top();

            pq.pop();

            int data=it.first;//MAX POSSIBLE DISTINCT SUM 

            int x=it.second.first;//ARRAY A KA ELMNT JOH KI CONSIDERED H 

            int y=it.second.second;//ARRAY B KA ELMNT JOH KI CONSIDERED H 
            //(B) KA ONLY LAST ELMNT CONSIDERED THA SO 

            ans.push_back(data);

            if(y!=0)//THIS IS DONE SO THAT ARRAY A'S ELMNT X WILL BE SUMMED UP WITH ALL POSSIBLE
//ELMNTS OF B AS N-1 K SAATH SUM HOGYA NOW WITH N-2 N-3...UNTIL IT IS 0 
            {

                pq.push({A[x]+B[y-1],{x,y-1}});

            }//TRYING ALL POSSIBLE WAYS 

        }

        return ans;//RETURN THE ANSWER 
    }
};

https://practice.geeksforgeeks.org/problems/maximum-sum-combination/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=maximum-sum-combination
