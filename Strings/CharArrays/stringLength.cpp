#include <iostream>
#include <string>//.h>
#include <cstring>

using namespace std;

void getStringLength(char str[]) {
    int i = 0;
    while(str[i] != '\0') {
        cout << str[i];
        i++;
    }
}

int main() {
    char name[20] = "hello";
    getStringLength(name);
    cout << "\n";
    cout << strlen(name);
    
    return 0;
}