#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{	
	string line;
	istringstream iss;
	ifstream infile ("input");
	ifstream outfile ("output");

	// detect missing files
	if (! infile || ! outfile) {
		cout << "Problem opening 'input' for reading or 'output' for writing.";
	}

	// read first line
	if (! getline(infile, line)) {
		cout << "Problem getting line from infile";
	}

	iss.str(line);
	iss >> num_test_cases;

	// iterate over the test cases
	for (int i = 0; i < num_test_cases; i++) {
		// do something...
	}
}