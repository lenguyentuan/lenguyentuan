#include<stdio.h>
#include<conio.h>
void NhapMang(int a[][100],int &n)
{
	scanf_s("%d", &n);
	for(int i=1;i<=n;i++)
		for (int j = 1; j <= n; j++)
		{
			a[i][j] = 0;
		}
}
void XuatMang(int a[][100], int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{ 
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}
void main()
{

	int a[100][100], n;
	NhapMang(a, n);
	int dem = 1;
	int hang = n; int cot = n;
	int i = 1; int j = ((cot + 1) / 2);
	
	while (dem<=n*n )
	{
		if (a[i][j] == 0)
		{
			a[i][j] = dem;
		}
		else
		{
			j--;
			i += 2;
			a[i][j]=dem;
		}
		i--;
			j++;
			if ((i < 1) && (j > cot))
			{
				i = 2; j = cot;
			}
			else
			{
				if (i < 1)
					i = hang;
				if (j > cot)
					j = 1;
			}
				dem++;

	}
	XuatMang(a, n);
	_getch();

}