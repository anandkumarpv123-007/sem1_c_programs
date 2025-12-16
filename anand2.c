#include <stdio.h>
int main(){
	int s[3][3],i,j,r,c ,sum=0; 
	printf("enter rows and columns: ");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
	scanf("%d",&s[i][j]);
	}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==j){
				sum=sum+s[i][j];
			}
		}
	}
	printf("%d",sum);
	printf("\n");
	return 0;
}
