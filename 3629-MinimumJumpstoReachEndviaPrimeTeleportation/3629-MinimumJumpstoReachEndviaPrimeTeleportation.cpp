// Last updated: 5/9/2026, 12:14:53 AM
1class Solution {
2public:
3    int minJumps(vector<int>& nums) {
4        unordered_map<int, vector<int>> port;
5        int n = nums.size();
6        for (int i = 0; i < n; i++) {
7            int tmp = nums[i];
8            for (int d = 2; d * d <= tmp; d++) {
9                if (tmp % d == 0) {
10                    port[d].push_back(i);
11                    while (tmp % d == 0) {
12                        tmp /= d;
13                    }
14                }
15            }
16
17            if (tmp > 1) {
18                port[tmp].push_back(i);
19            }
20
21        }
22        vector<bool> visited(n, false);
23        queue<int> q;
24        q.push(0);
25        int steps = 0;
26        while (!q.empty()) {
27            int sz = q.size();
28            while (sz--) {
29                int i = q.front();
30                q.pop();
31                int num = nums[i];
32                if (visited[i]) 
33                    continue;
34                visited[i] = true;
35                if (i == n - 1) 
36                    return steps;
37                if (port.count(num)) {
38                    for (int nei : port[num]) {
39                        q.push(nei);
40                    }
41                    port.erase(num);
42                }
43                if (i + 1 < n) {
44                    q.push(i + 1);
45                }
46                if (i - 1 >= 0) {
47                    q.push(i - 1);
48                }
49            }
50            steps++;
51        }
52        return steps;
53    }
54};