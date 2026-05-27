#include <iostream>
#include "Source.h"

using namespace std;

int main (){
    srand(time(0));
    cout << "  hatem altaee " << endl;
    int randomNumber = RandomNumber(10,99);
    cout << " Random number = [" << randomNumber << "]" << endl;
    vector<string> List = {"hatem","ali","mohammed","obaida"};
    PrintSrtingList(List);

return 0;
}

