// Last updated: 4/4/2026, 11:03:50 PM
class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    int n=0;
    KthLargest(int k, vector<int>& nums) {
        n=k;
        for(int num:nums){
            pq.push(num);
            if(pq.size()>k) pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>n)pq.pop();
        return pq.top();
    }
};
// 10 9 8 5 5 4 3 2
/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */