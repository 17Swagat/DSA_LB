#include <iostream>

using namespace std;

int getStringLength(char str[]){
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i; 
}

void reverseString(char str[], int length){
    int i = 0;
    int k = length-1;
    while (i < k) {
        {
            char temp = str[i];
            str[i] = str[k];
            str[k] = temp;
        }
        i++;
        k--;
    }
}

int main(){

    char greet[20] = "hello";
    cout << getStringLength(greet) << "\n"; // 5

    reverseString(greet, getStringLength(greet));
    cout << greet << "\n";
    
    return 0;
}