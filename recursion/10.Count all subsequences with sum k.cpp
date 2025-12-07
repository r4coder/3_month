class Solution{
    public:
    
int solve(int i,vector<int>& nums,int sum,int k)
        {
              if(i>nums.size())
              {
                 return (sum==k)?1:0;   
              }
              
              int take=solve(i+1,nums,sum+nums[i],k);
              int n_take=solve(i+1,nums,sum,k);
              
              return take+n_take;
            
        }
     
    
    
    
    
    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
        
         int n=nums.size();
         return solve(0,nums,0,k);
    }
};
