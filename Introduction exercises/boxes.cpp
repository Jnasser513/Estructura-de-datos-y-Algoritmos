#include <iostream>

using namespace std;

void logFirstTwoBoxes(int boxes[]){
    cout << boxes[0] << endl; // O(1)
    cout << boxes[1] << endl; // O(1)
}

int main() {
    int boxes[] = {0,1,2,3,4,5};
    logFirstTwoBoxes(boxes); // O(2)
    
    return 0;
}