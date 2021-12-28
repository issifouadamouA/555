int exercice2()
{
       float n1, n2, n3;
    printf("Tapez une valeur n1\n");
    printf("Tapez une valeur n2\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    printf("les valeurs de n1 et n2 entrees sont:\n");
    printf("______________________________________________\n");
    printf("n1=%f  n2=%f\n", n1,n2);
    n3=n1;
    n1=n2;
    n2=n3;
    printf("\n\n");
    printf("les valeurs echangees de n1 et n2 sont:\n");
    printf("______________________________________________\n");
    printf("n1=%f  n2=%f\n", n1,n2);
    return 0;
}




