int EX07S3()
{
int i,j,n;
	bool prime = true;
	printf("Enter le nombre :\n");
	scanf("%d", &n);
	for(i = 2; i < n;i++){
		if(n % i == 0) prime = false;
	}
	if(prime) printf("c'est nombre premier \n");
	else printf("ce n'est premier\n");
	//Second part
	int counter = 0;
	printf("Combien de nombres premiers afficher :\n");
	scanf("%d", &n);
	for(i = 1;;i++){
		prime = true;
		if(counter == n) break;
		for( j = 2;j < i;j++){
			if(i % j == 0) prime = false;
		}
		if(prime){
			printf("%d\n", i);
			counter++;
		}
	}
}
