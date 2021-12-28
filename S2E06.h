int S2E06()
{
    int n,somme=0,i,N,nomb;
    printf("Entrez un entier\n");
    scanf("%d",&n);
    printf("Entrez le nombre des nombres \n");
    scanf("%d",&N);
    printf("Entrez les nombres premiers\n");
    for(i=0;i<N;i++)
    {
       scanf("%d",&nomb);
       if(n%nomb==0)
        {
          somme+=nomb;
       }
      else{printf("sortez et recompiler\n");}
    }
    if(n==somme)
    {
     printf("Le nombre est parfait\n");
    }
    else{printf("Le nombre est non parfait\n");}
    return 0;
}
