int EX1S03(){
	int i,max,min,n,vals=0;
	printf("Entrez le nombre de valeurs :\n");
	scanf("%d", &n);
	printf("Enter des valeurs :\n");
	scanf("%d", &vals);
	min =vals;
	max =vals;
	for( i = 0;i < n-1;i++){
		scanf("%d", &vals);
		if(max < vals) max = vals;
		else if(min > vals) min = vals;
	}
	printf("La valeur max est :%d\nLa valeur min est:%d\n", max, min);
}
