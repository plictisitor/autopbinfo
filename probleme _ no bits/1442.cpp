/* mOFOsiMb4 ily traian dlqPafAKr */ int sum_cifra_control(long long a, long long b)
/* mOFOsiMb4 ily traian dlqPafAKr */ {
/* mOFOsiMb4 ily traian dlqPafAKr */   long long p=0;
/* mOFOsiMb4 ily traian dlqPafAKr */   if(a==9)
/* mOFOsiMb4 ily traian dlqPafAKr */   {
/* mOFOsiMb4 ily traian dlqPafAKr */       for(long long i=a;i<=b;i++)
/* mOFOsiMb4 ily traian dlqPafAKr */       {
/* mOFOsiMb4 ily traian dlqPafAKr */           if(i%9==0) p++;
/* mOFOsiMb4 ily traian dlqPafAKr */       }
/* mOFOsiMb4 ily traian dlqPafAKr */   }
/* mOFOsiMb4 ily traian dlqPafAKr */   else
/* mOFOsiMb4 ily traian dlqPafAKr */   for(long long i=a;i<=b;i++)
/* mOFOsiMb4 ily traian dlqPafAKr */   {
/* mOFOsiMb4 ily traian dlqPafAKr */       if(i%9==a) p++;
/* mOFOsiMb4 ily traian dlqPafAKr */   }
/* mOFOsiMb4 ily traian dlqPafAKr */   return p;
/* mOFOsiMb4 ily traian dlqPafAKr */ }