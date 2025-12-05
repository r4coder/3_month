class Solution{
    public:
   void insert(stack<int>&st,int temp)
   {
       if(s.empty()||s.top()<=top)
       {
           s.push(temp);
           return;
       }
       int val=s.top();
       s.pop();
       insert(s,temp);
       
       s.push(val);
       
       
   }
   
   
   void sort(stack<int>&st)
   {
       if(!s.empty())
       {
           int temp=st.top();
           st.pop();
           sort(st);
           insert(st,temp);
           
       }
       
   }
    
    
};
