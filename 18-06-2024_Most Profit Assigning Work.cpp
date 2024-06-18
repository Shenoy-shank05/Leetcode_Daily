class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
       vector<pair<int, int>> jobs;
        for (int i = 0; i < difficulty.size(); ++i) {
            jobs.emplace_back(difficulty[i], profit[i]);
        }
        sort(jobs.begin(), jobs.end());

     
        for (int i = 1; i < jobs.size(); ++i) {
            jobs[i].second = max(jobs[i].second, jobs[i - 1].second);
        }

        sort(worker.begin(), worker.end());

        int maxProfit = 0;
        int i = 0;

        for (int ability : worker) {
            while (i < jobs.size() && jobs[i].first <= ability) {
                ++i;
            }
            if (i > 0) {
                maxProfit += jobs[i - 1].second;
            }
        }

        return maxProfit;
    }
};
