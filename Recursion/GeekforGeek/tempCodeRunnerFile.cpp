#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Server {
    int idx;
    double ratio;
    int hits;
    bool operator<(const Server& other) const {
        return ratio < other.ratio; // max-heap
    }
};

long long getMinRequests(vector<int>& request, vector<int>& health, int k) {
    int n = request.size();
    vector<int> hits(n);
    long long total_requests = 0;
    long long curr_sum = 0;

    for (int i = 0; i < n; ++i) {
        hits[i] = (health[i] + k - 1) / k;
        curr_sum += request[i];
    }
    
    priority_queue<Server> pq;
    for (int i = 0; i < n; ++i) {
        pq.push({i, (double)request[i] / hits[i], hits[i]});
    }

    vector<bool> alive(n, true);

    while (!pq.empty()) {
        Server top = pq.top(); pq.pop();
        if (!alive[top.idx]) continue;
        int idx = top.idx;
        int h = hits[idx];
        total_requests += curr_sum * h;
        curr_sum -= request[idx];
        alive[idx] = false;
    }

    return total_requests + 1; // final request
}

int main() {
    vector<int> request4 = {75, 45, 81, 29, 2, 25, 84, 56, 2, 37, 39, 11, 6, 68, 16, 63, 49, 10, 68, 80};
    vector<int> health4  = {26, 72, 47, 97, 75, 82, 17, 32, 28, 57, 18, 79, 40, 68, 40, 93, 91, 55, 31, 57};
    int k4 = 18;
    cout << getMinRequests(request4, health4, k4) << endl;
    return 0;
}
