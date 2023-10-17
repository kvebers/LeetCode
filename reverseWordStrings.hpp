class Solution {
public:
    string reverseWords(string s) {
        std::vector<string> vec;

        int cnt = 0;
        int previous = 0;
        for (auto &it: s)
        {
            if (it == ' ')
            {
                if (previous == cnt)
                    previous = cnt + 1;
                else
                {
                    vec.push_back(s.substr(previous, cnt - previous));
                    previous = cnt + 1;
                }
            }
            cnt++;
        }
        if (s[s.length() -1 ] != ' ')
            vec.push_back(s.substr(previous, cnt - previous));
        s = "";
        for (int i = vec.size() - 1; i >= 0; i--)
        {
            if (i != 0)
            {
                if (vec[i].compare(" "))
                {
                    s.append(vec[i]);
                    s.append(" ");
                }
            }
            else
            {
                s.append(vec[i]);
            }
        }
        return s;
    }
};