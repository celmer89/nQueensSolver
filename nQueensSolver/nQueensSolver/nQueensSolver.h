/* ##########################################
#    class for solving n-queens problem
#    https://en.wikipedia.org/wiki/Eight_queens_puzzle
#    author: Maciej Celmer
############################################*/


#ifndef _NQUEENSSOLVER_H_
#define _NQUEENSSOLVER_H_

#include <algorithm>   
#include <iostream>
#include <vector>

class nQueensSolver
{
public:
	nQueensSolver();
	virtual ~nQueensSolver();

	int solve(unsigned int);
	void showLastSolutions();

private:
	void fillBoard(std::vector<unsigned int>  &a_board, int a_n);
	bool checkDiagonals(std::vector<unsigned int> a_board);
	void showBoard(std::vector<unsigned int> a_board);

	std::vector<std::vector<unsigned int>> m_solutions;
};

#endif /*_NQUEENSSOLVER_H_*/
