class Solution {
public:
    vector<int> countBits(int n) {
        
        std::vector<int> ok(n + 1, 0);
        for (int i = 0; i <= n; i++)
        {
            if (i % 2 == 0)
                ok[i] = ok[i / 2];
            else
                ok[i] = ok[i / 2] + 1;
        }

        return ok;
    }
};
