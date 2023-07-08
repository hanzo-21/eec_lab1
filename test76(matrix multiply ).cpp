// multiplaction of matrix m*n and q*p


#include<stdio.h>
#include<conio.h>

int main(){
	
	int num1[10][10], num2[10][10],mul[10][10], i,j,k,m,n,p,q;
	
	printf("for 1st matrix \nenter row (m) ");
	scanf("%d",&m);
	printf("enter column (n) ");
	scanf("%d",&n);
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("enter element of num1[%d][%d] ",i,j);
			scanf("%d",&num1[i][j]);
		}
	}
	
	printf("\nfor 2nd matrix \nenter row (q) ");
	scanf("%d",&q);
	printf("enter column (p) ");
	scanf("%d",&p);
	
	for(i=0;i<q;i++){
		for(j=0;j<p;j++){
			printf("enter element of num2[%d][%d] ",i,j);
			scanf("%d",&num2[i][j]);
		}
	}

	printf("\n\n1st matrix\n");
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",num1[i][j]);
		}
		printf("\n");
	}	
	
	
	printf("\n\n2nd matrix\n");
	
	for(i=0;i<q;i++){
		for(j=0;j<p;j++){
			printf("%d\t",num2[i][j]);
		}
		printf("\n");
	}	

	
	if(n==q){
		for(i=0;i<m;i++){
			for(j=0;j<p;j++){
				mul[i][j]=0;
				for(k=0; k<n;k++){
					mul[i][j]+=num1[i][k]*num2[k][j];
				}
			}										
		}	
	}
	else{
		printf("\nmatrix donot exist");
	}
	
	printf("\n\nmultipled matrix\n");
	
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}	
 

	
	
	getch();
	return 0;
}
