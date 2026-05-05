// Last updated: 5/5/2026, 12:40:47 PM
1class MinStack {
2public:
3    stack<int> st,mst;
4    MinStack() {
5        
6    }
7    
8    void push(int val) {
9        st.push(val);
10        if(mst.empty()){
11            mst.push(val);
12        }else{
13            mst.push(min(mst.top(),val));
14        }
15        
16    }
17    
18    void pop() {
19        st.pop();
20        mst.pop();
21    }
22    
23    int top() {
24        return st.top();
25    }
26    
27    int getMin() {
28        return mst.top();
29    }
30};
31
32/**
33 * Your MinStack object will be instantiated and called as such:
34 * MinStack* obj = new MinStack();
35 * obj->push(val);
36 * obj->pop();
37 * int param_3 = obj->top();
38 * int param_4 = obj->getMin();
39 */