#include <stdio.h>
int main(){
	int a[2][2] ,t[2][2] ,i,j,r,c ;
	printf("enter no of row and columbs of matrix a ");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			t[i][j]=a[j][i];
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",t[i][j]);
			}
			printf("\n");
		}
	 return 0;
}
