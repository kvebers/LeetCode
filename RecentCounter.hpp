class RecentCounter {
public:
    std::queue<int> timeStamps;
    RecentCounter() {}
    
    int ping(int t) {
        timeStamps.push(t);
        while (!timeStamps.empty() && timeStamps.front() < t - 3000){timeStamps.pop();}
        return timeStamps.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
