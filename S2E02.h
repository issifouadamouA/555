int S2E02()
{
 float pa,ca,fr,fv,tva,ph,ttc;
    char tp;
    printf("Voulez vous quel type de produit ?\n");
    tp=getchar();
    printf("Donnez le prix d'achat !?\n");
    scanf("%f",&pa);
    if(pa>9000)
       {
         fr=(4*pa/100); ca=pa+fr;
       }
    else if(pa>5000 && pa<=9000)
       {
        fr=(6*pa/100); ca=pa+fr;
       }
    else if(pa>2000 && pa<=5000)
       {
        fr=(6*pa/100); ca=pa+fr;
       }
    else
       {
        fr=(1*pa/100); ca=pa+fr;
       }
    fv=(10*ca/100);
    if(tolower(tp)=='x')
       {
        tva=(30*ca/100);
       }
     else if(tolower(tp)=='y')
       {
        tva=(38*ca/100);
       }
     else if(tolower(tp)=='z')
       {
        tva=(43*ca/100);
       }
    else if(tolower(tp)=='t')
       {
        tva=(47*ca/100);
       }
    else if(tolower(tp)=='u')
       {
        tva=(49*ca/100);
       }
     ph=ca+fr; ttc=ph+ph*tva;
     printf("prix d'achat: %f\n",pa);
     printf("frais: %f\n",fr);
     printf("frais de vente: %f\n",fv);
     printf("le tva: %f\n",tva);
     printf("prix hors taxe: %f\n",ph);
     printf("prix total: %f\n",ttc);
    return 0;
}
