class Solution{
    public:
    int  dp[1001][1001];
    int func(int i,int j ,string s)
    {
        if(i>j)   return 0;
        if(i==j)  return 1;
        
        if(dp[i][j]  != -1)  return dp[i][j]; //memoization 
        
        if(s[i]==s[j]) return  dp[i][j]  =  func(i+1,j,s) + func(i,j-1,s) + 1;
        
        else return dp[i][j]  =  func(i+1,j,s) + func(i,j-1,s) - func(i+1,j-1,s);
        }
    
    
    
    
    int  countPS(string str)
    {
       int n =  str.length();
       
       dp[n][n];
       memset(dp,-1,sizeof(dp));
       return func(0,n-1,str);
    }
     
};