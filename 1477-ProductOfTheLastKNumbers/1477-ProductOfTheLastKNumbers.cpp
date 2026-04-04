// Last updated: 4/4/2026, 11:02:21 PM
class ProductOfNumbers {
public:
    vector<int> mul={1};
    int n=1;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        if(num==0){
            mul={1};
            n=1;
        }else{
            mul.push_back(mul[n-1]*num);
            n++;
        }
    }
    
    int getProduct(int k) {
        if(n<=k)    return 0;
        return mul[n-1]/mul[n-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */