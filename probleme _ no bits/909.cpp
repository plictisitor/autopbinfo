/* XjFiiLJZh ily traian EefWRpPKy */ void perm(int& n)
/* XjFiiLJZh ily traian EefWRpPKy */ {
/* XjFiiLJZh ily traian EefWRpPKy */     int m=n, cnt=0,p=1,c=0;
/* XjFiiLJZh ily traian EefWRpPKy */     while (m)
/* XjFiiLJZh ily traian EefWRpPKy */     c=m%10, m/=10, cnt++;
/* XjFiiLJZh ily traian EefWRpPKy */     for (int i = 1; i <= cnt-1; ++i)
/* XjFiiLJZh ily traian EefWRpPKy */         p*=10;
/* XjFiiLJZh ily traian EefWRpPKy */     n%=p;
/* XjFiiLJZh ily traian EefWRpPKy */     n=n*10+c;
/* XjFiiLJZh ily traian EefWRpPKy */ }