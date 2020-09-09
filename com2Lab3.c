#include<stdio.h>
int getdata(int score[][3])
{
	int cnt;  //keep student amount.
	int i,col;
	
	FILE *inf;
	inf = fopen("score.txt","r");
	fscanf(inf,"%d",&cnt); //get student amount from file.
	for(i=0;i<cnt;i++) //get all of lab score.
	{
		for(col=0;col<3;col++)
		{
			fscanf(inf,"%d",&score[i][col]);
		}
	}
	fclose(inf);
	return(cnt); //return student amount back to main.
}
void printScore(int score[][3],int cnt)
{
	int i,col;
	FILE *inf;
	
	for(i=0;i<cnt;i++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",score[i][col]);
		}
		printf("\n");
	}
}
int main() //main function
{
	int score[10][3];
	int cnt;
	cnt = getdata(score);
	printScore(score,cnt);
	return 0;
}
