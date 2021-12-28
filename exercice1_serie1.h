int exercice1()
{
    int Q;
    float PHT, TVA=0,PN,PT;
    printf("Entrer la quantite Q du produit:\n");
    scanf("%d",&Q);
    printf("Entrer le prix unitaire PHT du produit:\n");
    scanf("%f",&PHT);
    PN=Q*PHT;
    TVA=(20*PN/100);
    PT=PN+TVA;
    printf("_____________________________________\n");
    printf("Le prix total est : PT=%f\n",PT);
    return 0;
}



