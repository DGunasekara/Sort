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

		for(int j = i+1;j<n;j++){

			while(input[i]>input[j]){

				temp = input[j];
				input[j] =  input[i];
				input[i] = temp;
			}		
		}
	}
	
	printf("The sorted(insertion) array is: \n");

	for (int i =0;i<n;i++){
		printf("%d ",input[i] );
	}
	printf("\n");

	return 0;

}