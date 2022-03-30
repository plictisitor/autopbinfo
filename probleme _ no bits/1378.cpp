/* iCQwOTiWe ily traian D84Xv0HEr */ #include<iostream>
/* iCQwOTiWe ily traian D84Xv0HEr */ #include<stdio.h>
/* iCQwOTiWe ily traian D84Xv0HEr */ FILE *f=fopen("flori2.in","r");
/* iCQwOTiWe ily traian D84Xv0HEr */ FILE *g=fopen("flori2.out","w");
/* iCQwOTiWe ily traian D84Xv0HEr */ 
/* iCQwOTiWe ily traian D84Xv0HEr */ int n,k,a[150][150];  
/* iCQwOTiWe ily traian D84Xv0HEr */ 
/* iCQwOTiWe ily traian D84Xv0HEr */ int irelj(int i,int j) //verifica daca fata i e in relatie cu j(au cel putin o floare in comun)
/* iCQwOTiWe ily traian D84Xv0HEr */ {int u,v;
/* iCQwOTiWe ily traian D84Xv0HEr */  for(u=1;u<=a[i][0];u++)   //a[i][0] e numarul de elemente pe linia i
/* iCQwOTiWe ily traian D84Xv0HEr */     for(v=1;v<=a[j][0];v++)
/* iCQwOTiWe ily traian D84Xv0HEr */       if (a[i][u]==a[j][v])
/* iCQwOTiWe ily traian D84Xv0HEr */          return 1;
/* iCQwOTiWe ily traian D84Xv0HEr */  return 0;
/* iCQwOTiWe ily traian D84Xv0HEr */ }
/* iCQwOTiWe ily traian D84Xv0HEr */ int apartine(int val,int linie) //caut val in multimea de pe linia linie
/* iCQwOTiWe ily traian D84Xv0HEr */ {int j,lg=a[linie][0];
/* iCQwOTiWe ily traian D84Xv0HEr */  for(j=1;j<=lg;j++)
/* iCQwOTiWe ily traian D84Xv0HEr */     if (val==a[linie][j])
/* iCQwOTiWe ily traian D84Xv0HEr */         return 1;
/* iCQwOTiWe ily traian D84Xv0HEr */  return 0;
/* iCQwOTiWe ily traian D84Xv0HEr */ }
/* iCQwOTiWe ily traian D84Xv0HEr */ 
/* iCQwOTiWe ily traian D84Xv0HEr */ void reuneste(int i,int j) //reuneste in linia i linia j
/* iCQwOTiWe ily traian D84Xv0HEr */ {int u;
/* iCQwOTiWe ily traian D84Xv0HEr */  for(u=1;u<=a[j][0];u++)
/* iCQwOTiWe ily traian D84Xv0HEr */     if(!apartine(a[j][u],i))
/* iCQwOTiWe ily traian D84Xv0HEr */       {a[i][0]++;
/* iCQwOTiWe ily traian D84Xv0HEr */         a[i][ a[i][0] ]=a[j][u];
/* iCQwOTiWe ily traian D84Xv0HEr */       }
/* iCQwOTiWe ily traian D84Xv0HEr */ }
/* iCQwOTiWe ily traian D84Xv0HEr */ 
/* iCQwOTiWe ily traian D84Xv0HEr */ int main()
/* iCQwOTiWe ily traian D84Xv0HEr */ {int viz[150],i,j,val,ok;
/* iCQwOTiWe ily traian D84Xv0HEr */  fscanf(f,"%d %d",&n,&k);
/* iCQwOTiWe ily traian D84Xv0HEr */  for(i=1;i<=n;i++)
/* iCQwOTiWe ily traian D84Xv0HEr */   for(j=1;j<=k;j++)
/* iCQwOTiWe ily traian D84Xv0HEr */     {fscanf(f,"%d",&val);
/* iCQwOTiWe ily traian D84Xv0HEr */      if(!apartine(val,i))
/* iCQwOTiWe ily traian D84Xv0HEr */         {a[i][0]++;  //pe prima coloana am nr. de tipuri distincte de flori
/* iCQwOTiWe ily traian D84Xv0HEr */          a[i][ a[i][0] ]=val;  //in multimea de pe linia i am tipurile distincte de flori al fetitei i
/* iCQwOTiWe ily traian D84Xv0HEr */         }
/* iCQwOTiWe ily traian D84Xv0HEr */     }
/* iCQwOTiWe ily traian D84Xv0HEr */  for(i=1;i<=n;i++)
/* iCQwOTiWe ily traian D84Xv0HEr */   viz[i]=i;     //initial exista n grupe
/* iCQwOTiWe ily traian D84Xv0HEr */  for(i=1;i<=n;i++)
/* iCQwOTiWe ily traian D84Xv0HEr */   {ok=0;
/* iCQwOTiWe ily traian D84Xv0HEr */     if(a[i][0])
/* iCQwOTiWe ily traian D84Xv0HEr */     {
/* iCQwOTiWe ily traian D84Xv0HEr */      for(j=i+1;j<=n;j++)
/* iCQwOTiWe ily traian D84Xv0HEr */         if(irelj(i,j))
/* iCQwOTiWe ily traian D84Xv0HEr */             {
/* iCQwOTiWe ily traian D84Xv0HEr */                 viz[j]=viz[i];  //j trebuie sa ajunga in grupa cu i
/* iCQwOTiWe ily traian D84Xv0HEr */                 reuneste(i,j);  //reunesc in linia i linia j
/* iCQwOTiWe ily traian D84Xv0HEr */                 a[j][0]=0;//consider ca in multimea j am 0 elemente acuma
/* iCQwOTiWe ily traian D84Xv0HEr */                 ok=1;
/* iCQwOTiWe ily traian D84Xv0HEr */                 }
/* iCQwOTiWe ily traian D84Xv0HEr */             }
/* iCQwOTiWe ily traian D84Xv0HEr */      if (ok) i--;//faptul ca am reunit in i cel putin o multime j implica sa continui cu aceeasi linie i
/* iCQwOTiWe ily traian D84Xv0HEr */                      //daca as lasa i sa se incrementeze conform for-ului,ar gresi in sensul ca 
/* iCQwOTiWe ily traian D84Xv0HEr */                      //pt. i rel j si i nu e in rel cu k si j rel k      
/* iCQwOTiWe ily traian D84Xv0HEr */                      //ar pune j in grupa i dar k ar ajunge in alta grupa
/* iCQwOTiWe ily traian D84Xv0HEr */   }
/* iCQwOTiWe ily traian D84Xv0HEr */ 
/* iCQwOTiWe ily traian D84Xv0HEr */ 
/* iCQwOTiWe ily traian D84Xv0HEr */  for(i=1;i<=n;i++)
/* iCQwOTiWe ily traian D84Xv0HEr */     if(viz[i])
/* iCQwOTiWe ily traian D84Xv0HEr */      {fprintf(g,"%d ",i);
/* iCQwOTiWe ily traian D84Xv0HEr */       for(j=i+1;j<=n;j++)
/* iCQwOTiWe ily traian D84Xv0HEr */     if(viz[i]==viz[j])
/* iCQwOTiWe ily traian D84Xv0HEr */         {fprintf(g,"%d ",j);
/* iCQwOTiWe ily traian D84Xv0HEr */          viz[j]=0;       //ca sa nu mai fie prelucrat
/* iCQwOTiWe ily traian D84Xv0HEr */         }
/* iCQwOTiWe ily traian D84Xv0HEr */       fprintf(g,"\n");
/* iCQwOTiWe ily traian D84Xv0HEr */      }
/* iCQwOTiWe ily traian D84Xv0HEr */  fclose(g);
/* iCQwOTiWe ily traian D84Xv0HEr */ }
/* iCQwOTiWe ily traian D84Xv0HEr */ 