int exercice5()
{
    int s,N1=0,N2=0,N3=0,N4=0,N5=0,i=0,S100=0,S50=0,S10=0,S5=0,S1=0;
    printf("Entrer une somme\n");
    scanf("%d",&s);
    printf("_____________________________\n");
    while(s>=100)
    {
        i=i+1;
        N1=i;
        S100=S100+100;
        s=s-100;
    }
    i=0;
    while(s>=50)
     {
       i=i+1;
       N2=i;
       S50=S50+50;
       s=s-50;
      }
    i=0;
    while(s>=10)
     {
       i=i+1;
       N3=i;
       S10=S10+10;
       s=s-10;
      }
    i=0;
    while(s>=5)
     {
       i=i+1;
       N4=i;
       S5=S5+5;
       s=s-5;
      }
    i=0;
    while(s>=1)
     {
       i=i+1;
       N5=i;
       S1=S1+1;
       s=s-1;
    }
    printf("N1=%d\n",N1);
    printf("S100=%d HD\n\n",S100);
    printf("N2=%d\n",N2);
    printf("S50=%d HD\n\n",S50);
    printf("N3=%d\n",N3);
    printf("S10=%d HD\n\n",S10);
    printf("N4=%d\n",N4);
    printf("S5=%d HD\n\n",S5);
    printf("N5=%d\n",N5);
    printf("S1=%d HD\n\n",S1);
    return 0;
}
