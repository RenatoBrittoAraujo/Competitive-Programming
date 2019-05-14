
#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>
using namespace std;

int size;

void randSeed(){

	static int x = 0;

	srand(time(NULL) + x++*x++);

	if(x > 1000)
		x = 0;

}


int randInt(int l, int r){

	return rand() % (r - l + 1) + l; 

}

int closeness(int * origin, int * target){

	int diff = 0;

	for(int i = 0; i < size; i++)
		diff += abs(origin[i] - target[i]);

	return diff;
	
}

int main(){
	
	cout<<"Size: ";
	cin>>size;

	int origin[size];

	for(int i = 0; i < size; i++)
		origin[i] = randInt(0, 100);
	
	while(true){

	}


}
