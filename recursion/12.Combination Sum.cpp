class Solution {
public:

void c(int i,vector<int>& t, int sum,vector<vector<int>>& v,vector<int>x)
 {
    if(i==t.size())
    {
       if(sum==0)
       {
           v.push_back(x);
           
       }
       return;
    }
    
    
    if(t[i]<=sum)
    {
       x.push_back(t[i]);
       c(i,t,sum-t[i],v,x);
       x.pop_back(); 
    }
   c(i+1,t,sum,v,x);




 } 





    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      
       vector<vector<int>>v;
       vector<int>x;
       c(0,candidates,target,v,x);
       return v;
        
        
    }
};
