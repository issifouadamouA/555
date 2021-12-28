int S2E03()
{

int age ;
    char genre ,civilite;
    printf("Entrez le genre(h/f), situation(m/c) et age\n");
    scanf("%s%s%d",&genre,&civilite,&age);
    if (genre=='h')
      {
          if((age<20 && civilite=='c') || (age>70 && civilite=='m'))
          {
              printf("impossable");
          }
          else
          {
              printf("vous devez payer impot");
          }
      }
    return 0;
}

