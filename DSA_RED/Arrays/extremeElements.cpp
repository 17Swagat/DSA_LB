#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>printExtremeElementsAlternately(vector<int>& arr) { 
        // Sorting elements in ascending order
        std::sort(arr.begin(), arr.end());
        
        int start = 0;
        int end = arr.size() - 1;
        vector<int> output_vec(arr.size());
        int index = 0;
        while (start <= end){
            if (start == end) 
                output_vec[index] = (arr[start]);
            output_vec[index++] = arr[start];
            output_vec[index++] = arr[end];
            start++;
            end--;

        }
        return output_vec;
    }

int main(){
    vector<int> vector_01 {4, 3, 5, 2, 1};
    printExtremeElementsAlternately(vector_01);
    return 0;
}