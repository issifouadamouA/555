int exercice6()
{
    int Q,M;
    float P,T;
    printf("Entrer la quantite Q du produit:\n");
    scanf("%d",&Q);
    printf("Entrer le prix unitaire P:\n");
    scanf("%f",&P);
    printf("____________________________\n");
    M=P*Q;
    printf("M=%d\n",M);
    if(M<=200)
    {
      T=M+25;
      printf("T=%f\n",T);
    }
     else
    {
      T=M;
      printf("T=%f\n",T);
    }
    return 0;
}

