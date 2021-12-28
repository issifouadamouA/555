int exercice8()
 {
    int Q;
    float PHT, TVA=0,PN,TTC,R,NET;
        printf("Entre la quantite Q des articules :\n");
        scanf("%d",&Q);
        printf("Entre le prix unitaire d'un articule :\n");
        scanf("%f",&PHT);
        PN=PHT*Q;
        TVA=(20*PN/100);
        TTC=PN+TVA;
        if(TTC>1000)
        {
            R=(5*TTC/100);
            NET=TTC-(5*TTC/100);
        }
         else
        {
        NET=TTC;
        }

         printf("_____________________________\n");
         printf("Le prix est: TTC=%f\n",TTC);
         printf("La remise est: R=%f\n",R);
         printf("Le prix net est: NET=%f\n",NET);
    return 0;
}
