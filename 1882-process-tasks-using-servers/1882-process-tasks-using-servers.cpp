class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        vector<int> ans;
        int i = 0;
        long long currTime = 0;

        priority_queue<pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>> pq;

        priority_queue<pair<long long,int>,
        vector<pair<long long,int>>,
        greater<pair<long long,int>>> temp;

        for(int j = 0; j < servers.size(); j++) {
            pq.push({servers[j], j});
        }

        while(i < tasks.size()) {

            currTime = max(currTime, (long long)i);

            // Release all available servers
            while(!temp.empty() && temp.top().first <= currTime) {
                auto time = temp.top();
                temp.pop();

                pq.push({servers[time.second], time.second});
            }

            // If all servers are busy, advance time
            if(pq.empty()) {
                currTime = temp.top().first;

                while(!temp.empty() && temp.top().first <= currTime) {
                    auto time = temp.top();
                    temp.pop();

                    pq.push({servers[time.second], time.second});
                }
            }

            // Select minimum weight server
            auto p = pq.top();
            pq.pop();

            int server = p.second;
            ans.push_back(server);

            // Update server's next available time
            temp.push({currTime + tasks[i], server});

            i++;
        }

        return ans;
    }
};