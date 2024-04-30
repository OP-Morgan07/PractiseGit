#include<stdio.h>
//In the maze only moving one block at a time is allowed. And only down or right step is allowed.
//Method 1
int maze(int cr, int cc, int er, int ec){ //cr-current row cc-current column er-ending row ec-ending column
	int rightWays = 0;
	int downWays = 0;
	
	if(cr==er && cc==ec) return 1;
	if(cr==er) { //Only rightWays call
	rightWays+= maze(cr, cc+1 , er, ec);
	}
	if(cc==ec) { //Only downWays call
	downWays+= maze(cr+1 , cc , er, ec);
	}
	if(cr<er && cc<ec){
		rightWays += maze(cr, cc+1, er ,ec);
		downWays += maze(cr+1, cc, er,ec);
	}
	int totalWays = rightWays + downWays;
	return totalWays;
	
}

int main(){
	int n;
	printf("ENTER THE NUMBER OF ROWS OF THE MAZE: ");
	scanf("%d", &n);
	int m;
	printf("ENTER THE NUMBER OF COLUMNS OF THE MAZE: ");
	scanf("%d", &m);
	
	int x= maze(1,1,n,m);
	printf("Ways to reach the end of the maze are: %d", x);
	
	return 0;
}