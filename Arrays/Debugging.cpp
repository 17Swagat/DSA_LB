#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;


    // pair<int, int> highestAndLowestFrequency(const vector<int>& arr) {
    //     // Implement logic to find elements with highest and lowest frequency
    //     // Me: 1st attempt
    //     // Using sorting
    //     vector<int> arr1 = arr;
    //     sort(arr1.begin(), arr1.end());

    //     // hightest freq
    //     int highest_freq_num = arr1[0];
    //     int high_freq = 1;
        
    //     // lowest freq
    //     int lowest_freq_num = arr1[0];
    //     int low_freq = 1;
    
    //     // count freq
    //     int num_freq = 1;

    //     for (int i = 1; i < arr1.size(); i++) {
    //         if (arr1[i] == arr1[i-1]) {
    //             num_freq++;
    //         } else {
    //             num_freq = 1;
    //         }

    //         // 1st Finding Hightest Frequency
    //         if (num_freq > high_freq){  
    //             highest_freq_num = arr[i];
    //             high_freq = num_freq;
    //         } else if (num_freq == high_freq){
    //             if (highest_freq_num > arr[i]) {
    //                 highest_freq_num = arr[i];
    //             }
    //         }

     
    //     }

    //     lowest_freq_num = lowestFrequencyNum(arr1);

    //     return {highest_freq_num, lowest_freq_num}; // Placeholder return; user will complete the logic
    // }

 int lowestFrequencyNum(const vector<int> &arr){
        // inputting a sortted array
        int cf = 1;
        int lf = INT_MAX;
        int lfn = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i-1]) {
                cf++;
            } else {
                if (cf < lf) {
                    lf = cf;
                    lfn = arr[i-1];
                } 
                cf = 1;
            }

            if (cf < lf){
                lf = cf;
                lfn = arr[i];
            } else if (cf == lf){
                lfn = (arr[i] < lfn) ? arr[i]: lfn;
            }
        }

        return lfn;
        
}

int main()
{
    vector<int> nums = {-1, -1, -1, -2, -2, -2};//{9, 9, 10, 20, 20};
    // pair<int, int> result = highestAndLowestFrequency(nums);
    int lfn = lowestFrequencyNum(nums);
    cout << lfn << endl;

    return 0;
}