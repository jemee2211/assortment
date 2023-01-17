#include<stdio.h>
main(){
	

	
    int M;
	int i,j ;
    int sum1=0;
   

	printf("Enter Value of N:");
	scanf("%d",&M);

		int a[M][M];
	
	for(i=0; i<M; i++){
		for(j=0; j<M; j++){
			
			printf("Enter Value of [%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}

	
	for(i=0; i<M; i++){
		for(j=0; j<M; j++){
			
	    printf("%d",a[i][j]);
			
         sum1+=a[i][j];
		
		}	
		
		
    	printf("\n");
		
	}
	
	
    
	
    int sum2=0;
   

	printf("Enter Value of N:");
	scanf("%d",&M);

		int b[M][M];
	
	for(i=0; i<M; i++){
		for(j=0; j<M; j++){
			
			printf("Enter Value of [%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
			
		}
	}

	
	for(i=0; i<M; i++){
		for(j=0; j<M; j++){
			
	    printf("%d",b[i][j]);
			
         sum2+=b[i][j];
		
		}	
		
		
    	printf("\n");
		
	}

    int sum[100][100];
 
  	for(i=0; i<M; i++){
		for(j=0; j<M; j++){
			
	    sum[i][j] = a[i][j]+b[i][j];
	   
  	printf("%d",sum[i][j]);
		
		}	
	
	printf("\n");
	}
  
  	
  
 
 	
	
}
