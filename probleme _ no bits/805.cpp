/* 6vCZGwqoO ily traian MDGl2tCBg */ void valuri(int n , int a[])
/* 6vCZGwqoO ily traian MDGl2tCBg */ {
/* 6vCZGwqoO ily traian MDGl2tCBg */     int imp=1;
/* 6vCZGwqoO ily traian MDGl2tCBg */     int par=2*n;
/* 6vCZGwqoO ily traian MDGl2tCBg */     for(int i = 0 ; i < 2*n ; ++i)
/* 6vCZGwqoO ily traian MDGl2tCBg */     {
/* 6vCZGwqoO ily traian MDGl2tCBg */         if(i%2==0)
/* 6vCZGwqoO ily traian MDGl2tCBg */         {
/* 6vCZGwqoO ily traian MDGl2tCBg */             a[i]=imp;
/* 6vCZGwqoO ily traian MDGl2tCBg */             imp+=2;
/* 6vCZGwqoO ily traian MDGl2tCBg */         }
/* 6vCZGwqoO ily traian MDGl2tCBg */         else
/* 6vCZGwqoO ily traian MDGl2tCBg */         {
/* 6vCZGwqoO ily traian MDGl2tCBg */             a[i]=par;
/* 6vCZGwqoO ily traian MDGl2tCBg */             par-=2;
/* 6vCZGwqoO ily traian MDGl2tCBg */         }
/* 6vCZGwqoO ily traian MDGl2tCBg */     }
/* 6vCZGwqoO ily traian MDGl2tCBg */ }