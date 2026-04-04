// Last updated: 4/4/2026, 11:05:43 PM
class MyStack {
    queue<int> q;
    queue<int> temp;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int ans=0;
        while(q.size()>1){
            ans=q.front();
            temp.push(ans);
            q.pop();
        }
        ans=q.front();
        q.pop();
        q.swap(temp);
        return ans;
    }
    
    int top() {
        int ans=0;
        while(!q.empty()){
            ans=q.front();
            temp.push(ans);
            q.pop();
        }
        q.swap(temp);
        return ans;
    }
    
    bool empty() {
        if(q.size()<=0)
            return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */