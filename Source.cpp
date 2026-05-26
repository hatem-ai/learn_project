#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int RandomNumber(int from,int to){

int randomNumber = rand() % (to - from + 1) + from;

return randomNumber;
}
