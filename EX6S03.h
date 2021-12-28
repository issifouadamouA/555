int EX6S03(){
	int d, n, max;
	srand(time(0));
	printf("Enter a deviner :\n");
	scanf("%d", &max);
	d = rand() % max;
	while(1){
		printf("Enter l'estime' :\n");
		scanf("%d", &n);
		if(n > d){
		printf("faux :\ndiminuer encore ...\n");
		}
		else if(n < d){
		printf("faux:\naugmenter...\n");
		}
		else{
			printf("bravo c'est juste ' !\n");
		}
		break;
	}

}
