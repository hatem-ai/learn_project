#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int RandomNumber(int from,int to){

int randomNumber = rand() % (to - from + 1) + from;

return randomNumber;
}

void PrintStringList(vector<string> List){

    for(string& text :List)
	cout << text << endl;
}
