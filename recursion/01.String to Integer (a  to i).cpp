class Solution {
public:

    int myAtoi(string s) {

        return helper(0,0,s,"","");

      }

int helper(long n,int i,string s,string p,string sign)
{
      if(i>=s.size())
      {
           if(sign=="-")
           {
              return -1*n;
           }

           else
           {
            return n;
           }
      }
          

       if(s[i]==' '&&p=="")
       {
            return helper(n,i+1,s,p,sign);
       }

    if((s[i]=='-'||s[i]=='+')&&p=="")
     {
             sign=s[i];
             p.push_back(s[i]);
             return helper(n,i+1,s,p,sign);
     }



     if(s[i]>='0'&&s[i]<='9')
     {
         n=n*10+s[i]-'0';
         p.push_back(s[i]); 

       if(sign=="-"&&-n<INT_MIN)
     {
            return INT_MIN;
     }

     else if((sign=="+"||sign=="")&&n>INT_MAX)
     {
         return INT_MAX;
     }

    
         return helper(n,i+1,s,p,sign);
     }

     

   if ((s[i]<'0' || s[i]>'9') && p=="")
    {
            return 0;
    }

    else if(s[i]<'0'||s[i]>'9'&&p!="")
    {
          if(sign=="-")
          {
             return -1*n;
          }

          else
          {
            return n;
          }

    }
    

     
     return -5;  
   
}





};
