#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int dado(){
	
	unsigned seed = time (0);
	srand (seed);
	
	cout << rand()%7;
	
}

int main(){
	
	return dado();
}
