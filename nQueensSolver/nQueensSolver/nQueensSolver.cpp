#include "nQueensSolver.h"


nQueensSolver::nQueensSolver()
{
}


nQueensSolver::~nQueensSolver()
{
}


int nQueensSolver::solve(unsigned int a_n)
{
	if (0 == a_n)
		return -1;

	m_solutions.clear();
	std::vector<unsigned int> board;
	fillBoard(board, a_n);

	do
	{
		if (checkDiagonals(board))
			m_solutions.push_back(board);

	} while (std::next_permutation(board.begin(), board.end()));

	return m_solutions.size();
}


void nQueensSolver::fillBoard(std::vector<unsigned int> &a_board, int a_n)
{
	for (unsigned int i = 0; i < a_n; ++i)
	{
		a_board.push_back(i);
	}
}



bool nQueensSolver::checkDiagonals(std::vector<unsigned int> a_board)
{
	for (int i = 0; i < a_board.size() - 1; ++i)
	{
		for (int j = i + 1; j < a_board.size(); ++j)
		{
			/* queens are on the same diagonal if difference between both coordinates is the same */
			int diff1 = abs(i - j);
			int diff2 = abs((int)(a_board[i] - a_board[j]));
			if (diff1 == diff2)
				return false;
		}
	}
	return true;
}


void nQueensSolver::showLastSolutions()
{
	if (m_solutions.size() == 0)
	{
		std::cout << "there are no solutions" << std::endl;
		return;
	}

	for (int i = 0; i < m_solutions.size(); ++i)
	{
		std::cout << "(" << i + 1 << ") ";
		showBoard(m_solutions[i]);
		std::cout << std::endl;
	}
}




void nQueensSolver::showBoard(std::vector<unsigned int> a_board)
{
	for (unsigned int i = 0; i < a_board.size(); ++i)
	{
		/* 65 is 'A' in ASCII*/
		std::cout << (char)(i + 65) << a_board[i] + 1 << "  ";
	}
}





