

int EX4S03(){
	int n,i,j;
	printf("Enter le nombre des lignes :\n");
	scanf("%d", &n);
	for(i = 1;i <= n; i++){
		for(j = 1; j <= i;j++){
			printf("*");
		}
		printf("\n");
	}
	//deuxième programme
	int k;
	for(i = n; i >= -n;i--){
		for(j = 1;j <= abs(i);j++){
			printf(" ");
		}
		for(k = n;k >= abs(i);k--){
			printf("*");
		}
		printf("\n");
	}
}
