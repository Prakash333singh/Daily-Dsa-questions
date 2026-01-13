class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        //[100,80,90,120]
        // int n = arr.size();
        // vector<int>spans;
        
        // for(int i=0;i<n;i++){
        //     int span=1;
        //     for(int j=i-1;j>=0;j--){
        //         if(arr[j]<= arr[i]){
        //             span++;
        //         }
        //         else
        //         {
        //         break;
        //         }
        //     }
        //      spans.push_back(span);
        // }
        // return spans;
         int n = arr.size() ;
        vector<int> ans(n) ;
        ans[0] = 1 ;
        stack<int> st ;
        st.push(0) ;
        
        for(int i = 1 ; i< n ; i++) {
            
            while(!st.empty() && arr[st.top()] <= arr[i] ) st.pop() ;
            
            if(!st.empty()) ans[i] = st.top() ;
            else ans[i] = -1 ;
            ans[i] = i - ans[i];
            
            st.push(i);
        }
        
        return ans; 
        
    }
};