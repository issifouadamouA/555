int exercice7()
{
   float x,y,z;
   printf("Entrer x, y et z:\n");
   scanf("%f%f%f", &x, &y, &z);
   printf("______________________\n");
   if(x>y && y>z || x>z && y<z)
   {
       printf("Le plus grand est: x=%f\n",x);
   }
   else if (y>x && x>z || y>z && z<x )
   {
      printf("le max: y=%f\n",y);
   }
   else
   {
     printf("le max: z=%f\n",z);
   }
      return 0;
}

