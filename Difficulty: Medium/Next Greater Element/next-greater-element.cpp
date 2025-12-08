class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        //[1,3,2,4]
        //3 4 4 -1
      
        int n=arr.size();
        vector<int>ans(n,-1);
        
        ///brute force approach
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(arr[j] > arr[i]){
        //             ans[i]=arr[j];
        //             break;
        //         }
        //     }
        // }
        
        //optimsed one
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[i] > arr[st.top()]){
                ans[st.top()]=arr[i];
                st.pop();
            }
            st.push(i);
        }
        
        
        return ans; 
    }
};