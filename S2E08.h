int S2E08()
{
    int W0=0,W1=1,W2=4,W3=7,i,j,n,W=0,q,Wn=0;
    printf("entrez l'indice n:\n");
    scanf("%d",&n);
    printf("choir votre question (1 ou 2) n:\n");
    scanf("%d",&q);
    for(i=2;i<=n;i++)
    {
        if(q==1){
        W=W+5*W1+W0+1;
        W0=W1;
        W1=W;
        Wn=Wn+W;
        }
        if(j==2)
        {
         if(n%=2)
         {
          W=W+2*W1+W0+8;
          W2=W3;
           W1=W;
           Wn=Wn+W;
         }
        }
        else
         {
          W=W+7*W1+W0-9;
          W2=W3;
           W1=W;
           Wn=Wn+W;
         }
        printf("Val a l'ordre %d est %d\n",i,Wn);
    }
    return 0;
}
