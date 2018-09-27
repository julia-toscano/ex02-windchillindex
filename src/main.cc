#include <iostream>
#include "windchillindex.h"



using std::cout;
using std::endl;
using edu::vcccd::vc::csv13::computeWindChillIndex;


int main(int argc, char *argv[]) {
	cout << computeWindChillIndex(12,3);
	return 0;
}

