int S2E07()

{
     int V0=2,i,n,choix,prod,som_V=0;
    printf("Entrez l'indice n des termes\n");
    scanf("%d",&n);
    printf("Entrez votre choix (1 ou 2)\n");
    scanf("%d",&choix);
    for(i=0;i<=n;i++)
    {
         if(choix==1)
      {
        if(n%2==0)

       som_V=som_V+2;
        }
       else
       {
      som_V+=4;
       }
       printf("Val de Vn a l'orde %d est %d\n",i,som_V);
    }
     if(choix==2)
    {
        V0=abs(-59);
     if(n%2==0)
        {
       prod*=8;
        }
       else
       {

      prod*=9;
       }

       printf("Val de Vn a l'orde %d est %d\n",i,prod);
    }
    return 0;

    }

