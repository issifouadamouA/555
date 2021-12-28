int S2E04()
{

int n;
    printf("Donner un nombre entier :\n");
    scanf("%d",&n);
    if(n>0 && n<=9)
    {
        printf("%d\n",n);
    }
    else
    {
     switch(n)
       {
      case 10:
        printf("A\n");
        break;
      case 11:
        printf("B\n");
        break;
      case 12:
        printf("C\n");
        break;
      case 13:
        printf("D\n") ;
        break;
      case 14:
        printf("E\n");
        break;
     case 15:
        printf("F\n");
        break;
     default:
       printf("erreur\n");
       break;
       }
    }
    return 0;
}
