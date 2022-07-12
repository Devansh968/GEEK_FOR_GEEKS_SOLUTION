class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s1, string s2)
    {
        
       int  n  =  s1.length();
       int  ma  =  s2.length();
       
       if(n!= ma )  return false;
       
       int  m1[256] = {0};
       int  m2[256]  = {0};
       
       for(int i=0;i<n;i++)
       {
           if(!m1[s1[i]]  and !m2[s2[i]])
           {
               m1[s1[i]]  = s2[i];
               m2[s2[i]] =  s1[i];
           }
           else if(m1[s1[i]] != s2[i]) return false;
       }
       return true;
        
    }
};