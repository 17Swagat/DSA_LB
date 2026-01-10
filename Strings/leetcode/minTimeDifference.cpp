#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int findMinDifference(vector<string>& timePoints) {
        // minutes: [00, 01, 02, 03, ....., 58, 59, 00]
        // "Minimum 2 time-points will be present in the list"

        vector<int> timePoints_inMinutes;
        for (string time: timePoints) {
            int hours = stoi(time.substr(0, 2));
            int minutes = stoi(time.substr(3, 2));
            int time_ = hours*60 + minutes;
            timePoints_inMinutes.push_back(time_);
        }

        sort(timePoints_inMinutes.begin(), timePoints_inMinutes.end());
        for (int mins: timePoints_inMinutes){
            cout << mins << " ";
            /*
                [159  626  1303]
                626-159 = 467
                1303-626 = 677
                1303-159 = 1144
                * {1440 - 1144 = 296}
            */
        }
        cout << "\n";
        
        int n = timePoints_inMinutes.size();
        int minDifference = INT_MAX;
        for (int i = 1; i < n; i++){
            int difference = 0;
            if (timePoints_inMinutes[i] - timePoints_inMinutes[i-1] <= 720){
                difference = timePoints_inMinutes[i] - timePoints_inMinutes[i-1];
            } else {
                difference = (1440 - timePoints_inMinutes[i] + timePoints_inMinutes[i-1]);
            }
            if (difference < minDifference) {
                minDifference = difference;
            }
        }

        return minDifference;
}

int main()
{
    vector<string> timePoints = {"02:39","10:26","21:43"};
    int result = findMinDifference(timePoints);
    cout << result << "\n";

    return 0;
}