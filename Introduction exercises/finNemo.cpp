#include <iostream>
#include <string>

using namespace std;

void findNemo(const char *nemo[]) {
    for(int i = 0; i < sizeof(nemo); i++){
        cout << "Hola" << endl;
        if(nemo[i] == "nemo"){
            cout << "Found NEMO!" << endl;
            break; //Cuando encuentre la palabra no recorre mas el arreglo
        }
    }
}

int main() {
    const char *nemo[] = {"mary", "nemo", "hola"};
    findNemo(nemo); // O(1)

    return 0;
}