#include <iostream>
#include "Source.h"

using namespace std;

int main (){
srand(time(0));
int randomNumber = RandomNumber(10,99);
cout << " Random number = [" << randomNumber << "]" << endl;

return 0;
}

