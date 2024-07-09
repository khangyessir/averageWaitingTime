class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int time = customers[0][0];
        double sum = 0;
        int n = customers.size();
        for(int i=0; i<n; ++i){
            if(customers[i][0] > time){
                time = customers[i][0];
            }
            time += customers[i][1];
            sum += (time - customers[i][0]);
        }
        double ans = sum / n;
        return ans;
    }
};
