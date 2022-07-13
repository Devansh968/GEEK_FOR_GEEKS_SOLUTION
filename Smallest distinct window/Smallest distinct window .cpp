class Solution{
    public:
    int findSubString(string str)
    {
       set<char>m;
        for(char s:str)
        {
            m.insert(s);
        }
        int n=m.size();
        int i=0,j=1,count=1;
        unordered_map<char,int>u;
        u[str[0]]++;
        int mini=INT_MAX;
        while(i<=j && j<str.size())
        {
            if(count<n)
            {
                if(u[str[j]]==0)
                    count++;
                u[str[j]]++;
                j++;
            }
            else if(count==n)
            {
                mini=min(mini,j-i);
                if(u[str[i]]==1)
                    count--;
                u[str[i]]--;
                i++;
            }
        }
        while(count==n)
        {
            mini=min(mini,j-i);
            if(u[str[i]]==1)
                count--;
            u[str[i]]--;
            i++;
        }
        return mini; 
     
    }
};