class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
       stack<int> s;
       for(int  i =0;i<S.length();i++)
       {
           if(S[i]== '+' || S[i]=='*' || S[i]== '-' || S[i]== '/')
           {
               int  x = s.top();
               s.pop();
               
               int y  =  s.top();
               s.pop();
           
           if(S[i]== '+')
           s.push(y+x);
           
            else if(S[i]== '-')
           s.push(y-x);
           
           else if(S[i]== '*')
           s.push(y*x);
           
           else
               s.push(y/x);
           }
           
           else
               s.push(S[i]-48);
           }
           return s.top();
       
    }
};

