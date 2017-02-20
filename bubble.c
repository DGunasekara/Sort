// bubble sort

#include <stdio.h>

int main (){

	int input[100],temp,n;

	printf("Enter the amount of the elements in the array : ");
	scanf("%d",&n);

	for (int i = 0; i <n; i++){
		scanf("%d",&input[i]);
	}
	for (int i = 0; i <n; i++){
		for(int j = 0;j<n-i-1;j++){
			if(input[j]>input[j+1]){
				temp=input[j];
				input[j]= input[j+1];
				input[j+1]=temp;
			}
		}
	}
	
	printf("The sorted(Bubble) array is: \n");

	for (int i =0;i<n;i++){
		printf("%d ",input[i] );
	}
	printf("\n");

	return 0;

}