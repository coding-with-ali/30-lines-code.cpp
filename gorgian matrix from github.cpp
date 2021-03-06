#include <iostream>
#define size 4

using namespace std;

int solveMaze(int currposrow,int currposcol,int maze[size][size],int soln[size][size])
{
	if((currposrow==size-1) && (currposcol==size-1))
	{
		soln[currposrow][currposcol]=1;
		for(int i=0;i<size;++i)
		{
			for (int j=0;j<size;++j)
			{
				cout<<soln[i][j];
			}
			cout<<endl;
		}
		return 1;
	}
	else
	{
		soln[currposrow][currposcol]=1;

		// if there exist a solution by moving one step ahead in a collumn
		if((currposcol<size-1) && maze[currposrow][currposcol+1]==1 && solveMaze(currposrow,currposcol+1,maze,soln))
		{
			return 1;
		}

		// if there exists a solution by moving one step ahead in a row
		if((currposrow<size-1) && maze[currposrow+1][currposcol]==1 && solveMaze(currposrow+1,currposcol,maze,soln))
		{
			return 1;
		}

		// the backtracking part
		soln[currposrow][currposcol]=0;
		return 0;
	}
}

int main(int argc, char const *argv[])
{
	int maze[size][size]={
		{1,0,1,0},
		{1,0,1,1},
		{1,0,0,1},
		{1,1,1,1}
	};

	int soln[size][size];

	for(int i=0;i<size;++i)
		{
			for (int j=0;j<size;++j)
			{
				soln[i][j]=0;
			}
		}

	int currposrow=0;
	int currposcol=0;
	solveMaze(currposrow,currposcol,maze,soln);
	return 0;
}
