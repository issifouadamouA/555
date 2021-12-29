int S2E05()
{
   int i,min,position,choix,N,nomb,compt=0,somme=0;
      int tab[25];
       min=tab[0];
       printf("entrer votre choix(0 ou 1 ou 2)\n");
       scanf("%d",&choix);
       if(choix==0){
       for ( i=0 ; i<25; i++)
       {
           scanf("%d",&tab[i]);
           if(tab[i]<min)
           {
              min=tab[i];
              position=i;
           }
        }
       printf("Minimum : %d\nPosition : %d\n",min,position);

      if(choix==1)
      {   i=0;
         printf("entrer N\n");
         scanf("%d",&N); printf("entrer les nombres\n");
          while(i<N)
     {
            scanf("%d",&nomb);
            somme+=nomb;
            i++;
     }
     printf("somme:%d\n",somme);
      }
      if(choix==2)
      {
          i=0;
          printf("entrer N\n");
          scanf("%d",&N); printf("entrer les nombres\n");
           while(i<N)
         {
          scanf("%d",&nomb);
          if(nomb%2!=0)
          {
              compt=compt+1;
          } i++;
         }
          printf("somme:%d\n",compt);
     }
    return 0;
}
}
