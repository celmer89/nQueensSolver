#include <iostream>
#include <stdlib.h>
#include "nQueensSolver.h"

using namespace std;

bool runTests(nQueensSolver &a_solver)
{
	bool passed = true;
	if (a_solver.solve(1) == 1) cout << "TEST 1 PASSED" << endl;
	else { cout << "TEST 1 FAILED" << endl; passed = false; }
	if (a_solver.solve(2) == 0) cout << "TEST 2 PASSED" << endl;
	else { cout << "TEST 2 FAILED" << endl; passed = false; }
	if (a_solver.solve(3) == 0) cout << "TEST 3 PASSED" << endl;
	else { cout << "TEST 3 FAILED" << endl; passed = false; }
	if (a_solver.solve(4) == 2) cout << "TEST 4 PASSED" << endl;
	else { cout << "TEST 4 FAILED" << endl; passed = false; }
	if (a_solver.solve(5) == 10) cout << "TEST 5 PASSED" << endl;
	else { cout << "TEST 5 FAILED" << endl; passed = false; }
	if (a_solver.solve(6) == 4) cout << "TEST 6 PASSED" << endl;
	else { cout << "TEST 6 FAILED" << endl; passed = false; }
	if (a_solver.solve(7) == 40) cout << "TEST 7 PASSED" << endl;
	else { cout << "TEST 7 FAILED" << endl; passed = false; }
	if (a_solver.solve(8) == 92) cout << "TEST 8 PASSED" << endl;
	else { cout << "TEST 8 FAILED" << endl; passed = false; }
	if (a_solver.solve(9) == 352) cout << "TEST 9 PASSED" << endl;
	else { cout << "TEST 9 FAILED" << endl; passed = false; }
	if (a_solver.solve(10) == 724) cout << "TEST 10 PASSED" << endl;
	else { cout << "TEST 10 FAILED" << endl; passed = false; }

	return passed;
}




int main()
{

	// create solver object
	nQueensSolver solver;


	// run tests 
	cout << "do you want to run tests? (Y/N)";
	char c;

	do {
		c = getchar();

	} while (c != 'Y' && c != 'y' && c != 'n' && c != 'N');

	if (c == 'Y' || c == 'y'){
		cout << endl << "tests are running, it may take a while... " << endl;
		if (runTests(solver))
			cout << "All tests passed!" << endl;
		else
			cout << "Not all test passed" << endl;
	}

	// solve n-problem
	int n;
	cout << endl << "type the size of the board that you want to solve: " << endl;
	cin >> n;
	if (!cin || n <= 0)
	{
		cout << "size of the board should be a positive integer number" << endl;
		return -1;
	}

	int solutions = solver.solve(n);


	// show solutions
	solver.showLastSolutions();
	cout << endl << "there are " << solutions << " solutions" << endl;


	system("pause");
}