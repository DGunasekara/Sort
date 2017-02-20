// selection sort

#include <stdio.h>

int main (){

	int input[100],n,position,swap;

	printf("Enter the amount of the elements in the array : ");
	scanf("%d",&n);

	for (int i = 0; i <n; i++){
		scanf("%d",&input[i]);
	}

	for (int i = 0; i <n; i++){
		position = i ;
		for(int j = i+1;j<n;j++){
			
			if(input[position]> input[j]){
				position = j;
			}
		}

		if(position != i){

			swap = input[i];
			input[i]= input[position];
			input[position] = swap;

		}
	}
	
	printf("The sorted(selection) array is: \n");


	for (int i =0;i<n;i++){
		printf("%d ",input[i] );
	}
	printf("\n");


	return 0;

}