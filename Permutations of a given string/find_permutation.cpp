class Solution
{
	public:
	void perm(string S,vector<string>& ans, int i,int j, int n){
        if(i>=n || j>=n || i==j) return;
        
     swap(S[i],S[j]);
     auto x = find(ans.begin(),ans.end(),S);
        if(x==ans.end()) ans.push_back(S);
           perm(S,ans, i+1,j+1,n);
           perm(S,ans,i,j+1,n);
           perm(S,ans,i+1,j,n);
           swap(S[i],S[j]);
           perm(S,ans, i+1,j+1,n);
           perm(S,ans,i,j+1,n);
           perm(S,ans,i+1,j,n);
    }

	
	
		vector<string>find_permutation(string S)
		{
		    // Code here there
		     vector<string> ans;
             ans.push_back(S);
        perm(S,ans,0,1,S.length());
             sort(ans.begin(),ans.end());
     return ans;
		}
};
