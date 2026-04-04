// Last updated: 4/4/2026, 11:05:15 PM
class NumArray {
public:
    vector<int> tree;
    int n;
    void build(int node,int l,int r,vector<int>& nums){
        if(l==r){
            tree[node]=nums[l];return;
        }

        int mid=l+(r-l)/2;
        build(2*node,l,mid,nums);
        build(2*node+1,mid+1,r,nums);
        tree[node]=tree[2*node]+tree[2*node+1];
    }

    void updateTree(int node,int l,int r,int idx,int val){
        if(l==r){    tree[node]=val;return;}
        //if(idx<l || idx>r)  return;
        int mid=l+(r-l)/2;
        if(idx<=mid)updateTree(2*node,l,mid,idx,val);
        else updateTree(2*node+1,mid+1,r,idx,val);
        tree[node]=tree[2*node]+tree[2*node+1];
    }

    int sum(int node,int l,int r,int ql,int qr){
        if(qr < l || r < ql)    return 0;
        if(ql<=l && r<=qr)  return tree[node];
        int mid=l+(r-l)/2;
        return sum(2*node,l,mid,ql,qr)+sum(2*node+1,mid+1,r,ql,qr);
    }


    NumArray(vector<int>& nums) {
        n=nums.size();
        tree.assign(4*n,0);
        build(1,0,n-1,nums);
    }
    
    void update(int index, int val) {
        updateTree(1,0,n-1,index,val);
    }
    
    int sumRange(int left, int right) {
        return sum(1,0,n-1,left,right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */