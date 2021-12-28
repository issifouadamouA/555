int EX3S03(){
	int i,num_art, q;
	float sum = 0, unit_unit;
	printf("Enter le nombre des articles :\n");
	scanf("%d", &num_art);
	for(i = 1;i <= num_art;i++){
		printf("Enter la quantitee %d\n", i);
		scanf("%d%f", &q, &unit_unit);
		sum += unit_unit * q;
	}
	printf("La somme est : %.2f", sum);
}
