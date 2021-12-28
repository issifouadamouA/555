int EX2S03(){
	int i,note,n,sum=0;
	float moy;
        printf("Enter le nombre des notes disponibles :\n");
        scanf("%d", &n);
        printf("Enter les notes :\n");
        for(i = 0;i < n;i++){
                scanf("%d", &note);
        	sum +=note;
	}
	moy = (float)sum/n;
	printf("La moy est %.2f\n", moy);
}
