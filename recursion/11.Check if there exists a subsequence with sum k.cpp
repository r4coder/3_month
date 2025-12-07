class Solution{
    public:
    
bool solve(int i,vector<int>& nums,int sum,int k)
        {
              if(i>nums.size())
              {
                 return (sum==k);     
              }
              
              if(take)
              {
                  return true;
              }
              
              int take=solve(i+1,nums,sum+nums[i],k);
              int n_take=solve(i+1,nums,sum,k);
              
              return take||n_take;
            
        }
     
    
    
    
    
    bool countSubsequenceWithTargetSum(vector<int>& nums, int k){
        return solve(0,nums,0,k);
    }
};



