//Look into this.!! URGENT!!!
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
int min, mincost=0, cost[9][9], parent[9], i, j, k, a, b, u, v, n, ne=1; //Parent array stores "relationship status among different nodes".
int find(int);
int uni(int, int);
int main()
{
	printf("Enter the number of vertex(ices):\t");
	scanf("%d", &n);//n<=9 (A/Q) 
	printf("Enter cost Adjancy Matrix:\t");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;i++)
		{
			scanf("%d", &cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
	}
	printf("Edges of Minimum Cost Spa. Tree:\n");
	while(ne<n)
	{
		min=999;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(cost[i][j]<min)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
			}
			u=find(u);
			v=find(v);
			if(uni(u,v))
			{
				printf("%d edge (%d,%d) = %d", ne, a, b, min);
				mincost+=min;
				cost[u][v]=cost[v][u]=999;
			}
			ne++;
		}
		printf("Final Cost= %d", mincost);
		getch();
	}
}
int find(int x)
{
	while(parent[x])//meaning, while (parent[x]!=0)
			x=parent[x];
	return x;
}
int uni(int i, int j)
{
	if(i!=j)
	{
		parent[j]=i;
		return 1;
	}
	return 0;
}
