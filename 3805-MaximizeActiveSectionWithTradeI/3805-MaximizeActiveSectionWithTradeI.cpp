// Last updated: 4/4/2026, 10:59:32 PM
class Solution {
public:
    int maxActiveSectionsAfterTrade(string y) {
        int a = count(y.begin(), y.end(), '1');
    string b = "1" + y + "1";
    int c = b.size();
    
    vector<pair<int, int>> d, e;
    
    int f = 0;
    while (f < c) {
        if (b[f] == '0') {
            int g = f;
            while (f < c && b[f] == '0') f++;
            d.emplace_back(g, f - 1);
        } else {
            int g = f;
            while (f < c && b[f] == '1') f++;
            e.emplace_back(g, f - 1);
        }
    }
    
    int h = 0;
    vector<int> i(c, 0);
    
    for (const auto& j : d) {
        int k = j.second - j.first + 1;
        for (int l = j.first; l <= j.second; ++l) {
            i[l] = k;
        }
    }
    
    for (size_t m = 1; m + 1 < e.size(); ++m) {
        int n = e[m].first;
        int o = e[m].second;
        
        if (n > 0 && o < c - 1 && b[n - 1] == '0' && b[o + 1] == '0') {
            int p = i[n - 1];
            int q = i[o + 1];
            h = max(h, p + q);
        }
    }
    
    return a + h;
    }
};