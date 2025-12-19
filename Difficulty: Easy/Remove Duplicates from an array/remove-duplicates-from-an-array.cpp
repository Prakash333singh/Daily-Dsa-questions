class Solution {
  public:
    vector<int> remDuplicate(vector<int>& arr) {
        // code here
        vector<int>ans;
        int n = arr.size();
        unordered_set<int>st;
    
        for (int x : arr) {
                if (st.find(x) == st.end()) {   
                    st.insert(x);
                    ans.push_back(x);
                 }
        }

        return ans;

   
    }
};