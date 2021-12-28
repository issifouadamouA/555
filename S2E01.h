int S2EX01()
{
    int s,i=0,B_200=0,B_100=0,B_50=0,B_20=0,B_10=0,B_5=0,B_1=0;
    printf("Entrer une somme\n");
    scanf("%d",&s);
    while(s>=200)
    {
        i=i+1;
        B_200=B_200+1;
        s=s-200;
    }
    i=0;
    while(s>=100)
     {
       i=i+1;
       B_100=B_100+1;
       s=s-100;
      }
    i=0;
    while(s>=50)
     {
       i=i+1;
       B_50=B_50+1;
       s=s-50;
      }
    i=0;
    while(s>=20)
     {
       i=i+1;
       B_20=B_20+1;
       s=s-20;
      }
    i=0;
    while(s>=10)
     {
       i=i+1;
       B_10=B_10+1;
       s=s-10;
    }
     while(s>=5)
     {
       i=i+1;
       B_5=B_5+1;
       s=s-5;
    }
     while(s>=1)
     {
       i=i+1;
       B_1=B_1+1;
       s=s-1;
    }
    printf(" b_200=%d\n b_100=%d\n b_50=%d\n b_20=%d\n b_10=%d\n b_5=%d\n b_1=%d\n",B_200,B_100,B_50,B_20,B_10,B_5,B_1);
    return 0 ;
    }

