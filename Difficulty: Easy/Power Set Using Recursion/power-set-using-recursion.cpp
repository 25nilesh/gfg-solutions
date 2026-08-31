class Solution {
  public:
    void solve(int i,string str,string s,vector<string>& result){
        if(i==s.size()){
            result.push_back(str);
            str="";
            return;
        }
        solve(i+1,str+s[i],s,result);
        solve(i+1,str,s,result);
    }
    vector<string> powerSet(string s) {
        // code here
        vector<string> result;
        string str="";
        solve(0,str,s,result);
        return result;
    }
};
