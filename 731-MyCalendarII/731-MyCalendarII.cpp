// Last updated: 5/14/2026, 12:06:12 AM
1class MyCalendarTwo {
2public:
3    map<int,int> mp;
4    
5    MyCalendarTwo() {
6        
7    }
8    
9    bool book(int startTime, int endTime) {
10        mp[startTime]+=1;
11        mp[endTime]-=1;
12        int room=0;
13        int overLap=0;
14        for(auto& [ro,del]:mp){
15            overLap+=del;
16            room=max(room,overLap);
17        }
18        if(room>2){
19            mp[startTime]-=1;
20            mp[endTime]+=1;
21            return false;
22        }
23        return true;
24    }
25};
26
27/**
28 * Your MyCalendarTwo object will be instantiated and called as such:
29 * MyCalendarTwo* obj = new MyCalendarTwo();
30 * bool param_1 = obj->book(startTime,endTime);
31 */