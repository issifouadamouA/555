
int EX5S03(){
	int sum=0,num,compteur=0;
	float moy;
	char autre;
	while(1){
		scanf("%d", &num);
		sum += num;
		compteur++;
		printf("continuer(O/o) ou areter(N/n)?\n");
		scanf("%s", &autre);
		if(autre == 'y' || autre == 'Y') continue;
		else if(autre == 'N' ||autre == 'n') break;
	}
	moy = (float) sum / compteur;
	printf("la moyenne est :%.2f\n", moy);
}
