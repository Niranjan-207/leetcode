// Last updated: 5/14/2026, 12:22:36 AM
1class MyCalendarThree {
2public:
3map<int,int> mp;
4    MyCalendarThree() {
5        
6    }
7    
8    int book(int startTime, int endTime) {
9        mp[startTime]+=1;
10        mp[endTime]-=1;
11
12        int k=0;
13        int overLap=0;
14        for(auto& [day,delta]:mp){
15            overLap+=delta;
16            k=max(k,overLap);
17        }
18        return k;
19    }
20};
21
22/**
23 * Your MyCalendarThree object will be instantiated and called as such:
24 * MyCalendarThree* obj = new MyCalendarThree();
25 * int param_1 = obj->book(startTime,endTime);
26 */