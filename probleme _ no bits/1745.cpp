/* NOKh6rIyd ily traian vz54Gcmjs */ int minDivPrim(int n)
/* NOKh6rIyd ily traian vz54Gcmjs */ {
/* NOKh6rIyd ily traian vz54Gcmjs */     int x=1,d=2;
/* NOKh6rIyd ily traian vz54Gcmjs */     while(n>1)
/* NOKh6rIyd ily traian vz54Gcmjs */     {
/* NOKh6rIyd ily traian vz54Gcmjs */         if(n%d==0)
/* NOKh6rIyd ily traian vz54Gcmjs */             {
/* NOKh6rIyd ily traian vz54Gcmjs */                 while(n%d==0)n/=d;
/* NOKh6rIyd ily traian vz54Gcmjs */                 x=x*d;
/* NOKh6rIyd ily traian vz54Gcmjs */             }
/* NOKh6rIyd ily traian vz54Gcmjs */                 ++ d;
/* NOKh6rIyd ily traian vz54Gcmjs */         if(n>1 && d*d>n)d = n;
/* NOKh6rIyd ily traian vz54Gcmjs */     }
/* NOKh6rIyd ily traian vz54Gcmjs */     return x;
/* NOKh6rIyd ily traian vz54Gcmjs */ }