class StockSpanner {
public:
    StockSpanner() {
          st.push(-1); 
    }
    vector<int>arr;
    stack<int>st;
 
    int i = 0;
    int next(int price) {
        arr.push_back(price);
        //pop
        while(!st.empty() && st.top()!=-1 && arr[st.top()]<=price){
            st.pop();
        }
        //ans
        int ans = i-st.top();
        //push
        st.push(i);
        i++;
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */