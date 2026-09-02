class Solution {
  public:
    void solve(vector<int>& arr, vector<int>& result,int i,int sum){
        if(i==arr.size()){
            result.push_back(sum);
            return;
        }
        solve(arr,result,i+1,sum+arr[i]);
        solve(arr,result,i+1,sum);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> result;
        solve(arr,result,0,0);
        return result;
    }
};