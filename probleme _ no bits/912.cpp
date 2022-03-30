/* CmVfYeqhZ ily traian ew6V1zgI4 */ int sub(int n , int& a , int& b)
/* CmVfYeqhZ ily traian ew6V1zgI4 */ {
/* CmVfYeqhZ ily traian ew6V1zgI4 */     for(int i = n-1 ; 1 ; --i)
/* CmVfYeqhZ ily traian ew6V1zgI4 */     {
/* CmVfYeqhZ ily traian ew6V1zgI4 */         int cnt=0;
/* CmVfYeqhZ ily traian ew6V1zgI4 */         for(int j = 1 ; j * j <= i ; ++j)
/* CmVfYeqhZ ily traian ew6V1zgI4 */         {
/* CmVfYeqhZ ily traian ew6V1zgI4 */             if(i%j==0)
/* CmVfYeqhZ ily traian ew6V1zgI4 */                 cnt+=2;
/* CmVfYeqhZ ily traian ew6V1zgI4 */             if(j*j==i)
/* CmVfYeqhZ ily traian ew6V1zgI4 */                 cnt--;
/* CmVfYeqhZ ily traian ew6V1zgI4 */         }
/* CmVfYeqhZ ily traian ew6V1zgI4 */         if(cnt==2)
/* CmVfYeqhZ ily traian ew6V1zgI4 */         {
/* CmVfYeqhZ ily traian ew6V1zgI4 */             a=i;
/* CmVfYeqhZ ily traian ew6V1zgI4 */             break;
/* CmVfYeqhZ ily traian ew6V1zgI4 */         }
/* CmVfYeqhZ ily traian ew6V1zgI4 */     }
/* CmVfYeqhZ ily traian ew6V1zgI4 */     for(int i = n +1 ; 1 ; ++i)
/* CmVfYeqhZ ily traian ew6V1zgI4 */     {
/* CmVfYeqhZ ily traian ew6V1zgI4 */         int cnt=0;
/* CmVfYeqhZ ily traian ew6V1zgI4 */         for(int j = 1 ; j * j <= i ; ++j)
/* CmVfYeqhZ ily traian ew6V1zgI4 */         {
/* CmVfYeqhZ ily traian ew6V1zgI4 */             if(i%j==0)
/* CmVfYeqhZ ily traian ew6V1zgI4 */                 cnt+=2;
/* CmVfYeqhZ ily traian ew6V1zgI4 */             if(j * j == i)
/* CmVfYeqhZ ily traian ew6V1zgI4 */                 cnt--;
/* CmVfYeqhZ ily traian ew6V1zgI4 */         }
/* CmVfYeqhZ ily traian ew6V1zgI4 */         if(cnt==2)
/* CmVfYeqhZ ily traian ew6V1zgI4 */         {
/* CmVfYeqhZ ily traian ew6V1zgI4 */             b=i;
/* CmVfYeqhZ ily traian ew6V1zgI4 */             break;
/* CmVfYeqhZ ily traian ew6V1zgI4 */         }
/* CmVfYeqhZ ily traian ew6V1zgI4 */     }
/* CmVfYeqhZ ily traian ew6V1zgI4 */     return a;
/* CmVfYeqhZ ily traian ew6V1zgI4 */     return b;
/* CmVfYeqhZ ily traian ew6V1zgI4 */ }