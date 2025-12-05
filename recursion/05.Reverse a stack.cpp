//O(n) auxillary space
class Solution{
    public:
    
      void reverse(stack<int>&st)
      {
          if(st.empty())
          {
              return;
          }
          
          int top=st.top();
          st.pop();
          
          reverse(st);
          
          stack<int>temp;
          while(!st.empty())
          {
              temp.push(st.top());
              st.pop();
          }
          st.push(top);
          
          while(!temp.empty())
          {
              st.push(temp.top());
              temp.pop();
          }
          
          
      }
};
//O(1) auxillary space
class Solution{
    public:
    
      void insertB(stack<int>&st,int y)
      {
          if(st.empty())
          {
              st.push(y);
              return;
          }
          
         int top=st.top();
         st.pop();
         insertB(st,y);
         st.push(top);
          
          
          
          void insertB(stack<int>&st)
          {
              if(st.empty())
              {
                  return;
              }
              int top=st.top();
              st.pop();
              
              reverse(st);
              insertB(st,top);
              
          }
          
          
      }
};

