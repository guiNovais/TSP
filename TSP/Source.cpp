#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

#include "City.h"
#include "Solution.h"
#include "Util.h"
#include "BruteForceSolution.h"

using namespace std;

double loadDistance(vector<City>);
double loadDistance(City, City);

int main() {
	try {
		vector<City> cities = Util().loadCitiesFromFile();
		
		Solution loadSolution = BruteForceSolution().loadSolution(cities);
		Util().generateFileResult("Brute Force Solution", loadSolution);

	}
	catch (runtime_error & e) {
		cerr << e.what() << endl;
	}
	return 0;
}
