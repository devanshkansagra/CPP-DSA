#include <bits/stdc++.h>
using namespace std;

class Job {
    public:
        char id;
        int deadline;
        int profit;
};


bool compare(Job a, Job b) {
    return a.profit > b.profit;
}
int sequenceJobs(vector <Job> &jobs) {
    sort(jobs.begin(), jobs.end(), compare);
    int n = jobs.size();
    vector <bool> slot(n);
    vector <int>  result(n);

    int maxProfit = 0;

    for(int i = 0; i < n; i++) {
        slot[i] = false;
    }

    for(int i = 0; i < n; i++) {
        for(int j = min(n, jobs[i].deadline) - 1; j >= 0; j--) {
            if(slot[j] == false) {
                result[j] = i;
                slot[j] = true;
                maxProfit += jobs[i].profit;
                break;
            }
        }
    }

    cout << "Job sequence: ";
    for(int i = 0; i < n; i++) {
        if(slot[i] == true) {
            cout << jobs[result[i]].id << " ";
        }
    }
    cout << endl;
    return maxProfit;
}
int main() {

    vector <Job> jobs = { 
                            { 'a', 2, 100 },
                            { 'b', 1, 19 },
                            { 'c', 2, 27 },
                            { 'd', 1, 25 },
                            { 'e', 3, 15 } 
                        };    
    int maxProfit = sequenceJobs(jobs);
    cout << "Maximum profit after sequencing jobs is: " << maxProfit << endl;
    return 0;
}