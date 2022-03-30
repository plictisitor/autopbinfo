/* F0jPNS15p ily traian 1TIUChKes */ long long int NextNumber(long long int n)
/* F0jPNS15p ily traian 1TIUChKes */ {
/* F0jPNS15p ily traian 1TIUChKes */     int a[100] = {0} , nc = 0;
/* F0jPNS15p ily traian 1TIUChKes */     long long int x = n;
/* F0jPNS15p ily traian 1TIUChKes */     while(x)
/* F0jPNS15p ily traian 1TIUChKes */     {
/* F0jPNS15p ily traian 1TIUChKes */         a[++nc]=x%2;
/* F0jPNS15p ily traian 1TIUChKes */         x/=2;
/* F0jPNS15p ily traian 1TIUChKes */     }
/* F0jPNS15p ily traian 1TIUChKes */     int cnt0=0 , cnt1=0 , i = 1;
/* F0jPNS15p ily traian 1TIUChKes */     while(!a[i])
/* F0jPNS15p ily traian 1TIUChKes */         i++ , cnt0++;
/* F0jPNS15p ily traian 1TIUChKes */     while(a[i])
/* F0jPNS15p ily traian 1TIUChKes */         i++ , cnt1++;
/* F0jPNS15p ily traian 1TIUChKes */     if(i > nc)
/* F0jPNS15p ily traian 1TIUChKes */         nc++;
/* F0jPNS15p ily traian 1TIUChKes */     cnt0++;
/* F0jPNS15p ily traian 1TIUChKes */     a[i]=1;
/* F0jPNS15p ily traian 1TIUChKes */     int j = i - 1;
/* F0jPNS15p ily traian 1TIUChKes */     for(int d = 1 ; d <= cnt0 ; d++ , j--)
/* F0jPNS15p ily traian 1TIUChKes */         a[j]=0;
/* F0jPNS15p ily traian 1TIUChKes */     for(int c = 1 ; c < cnt1 ; c++ , j--)
/* F0jPNS15p ily traian 1TIUChKes */         a[j]=1;
/* F0jPNS15p ily traian 1TIUChKes */     long long int p = 1;
/* F0jPNS15p ily traian 1TIUChKes */     for(i = 1 ; i <= nc ; ++i)
/* F0jPNS15p ily traian 1TIUChKes */         {
/* F0jPNS15p ily traian 1TIUChKes */             x = x + a[i] * p;
/* F0jPNS15p ily traian 1TIUChKes */             p*=2;
/* F0jPNS15p ily traian 1TIUChKes */         }
/* F0jPNS15p ily traian 1TIUChKes */     return x;
/* F0jPNS15p ily traian 1TIUChKes */ }