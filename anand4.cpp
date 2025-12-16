#include <stdio.h>
int main(){
	int a[3][3],i,j,n;
	printf("enter order of matrix ");
	scanf("%d",&n);
	printf("enter the elements in to array");
	for(i=0;i<n;i++){
		for(i=0;i<n;i++){
		scanf("%d",&a[i][j]);
		}
	}
	printf("lower things matrix");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i>=j){
				printf("%d",a[i][j]);
			}
			else{
				printf("0");
			}
			printf("\n");
		}
	}
	return 0;
}
