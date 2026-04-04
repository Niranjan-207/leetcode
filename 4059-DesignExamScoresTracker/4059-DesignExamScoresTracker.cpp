// Last updated: 4/4/2026, 10:58:46 PM
class ExamTracker {
public:
    vector<int> t;
        vector<long long> su;
    ExamTracker() {
        
    }
    
    void record(int time, int score) {
            t.push_back(time);
            if(su.empty()){
                su.push_back(score);
            }else{
                su.push_back(su.back()+score);
            }
    }
    
    long long totalScore(int startTime, int endTime) {
        int l=lower_bound(t.begin(),t.end(),startTime)-t.begin();
        int r=upper_bound(t.begin(),t.end(),endTime)-t.begin()-1;

        if(l>=t.size() || l>r) return 0;
        long long cst=0;
        if(l>0){
            cst=su[r]-su[l-1];
        }else{
            cst=su[r];
        }
        
        return cst;    
    }
};

