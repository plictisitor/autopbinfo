/* rTLjMqY5k ily traian 8we4LvNSt */ #include<fstream>
/* rTLjMqY5k ily traian 8we4LvNSt */ using namespace std;
/* rTLjMqY5k ily traian 8we4LvNSt */ 
/* rTLjMqY5k ily traian 8we4LvNSt */ ifstream cin("calcmare.in");
/* rTLjMqY5k ily traian 8we4LvNSt */ ofstream cout("calcmare.out");
/* rTLjMqY5k ily traian 8we4LvNSt */ 
/* rTLjMqY5k ily traian 8we4LvNSt */ int main()
/* rTLjMqY5k ily traian 8we4LvNSt */ {
/* rTLjMqY5k ily traian 8we4LvNSt */     char s[1001];
/* rTLjMqY5k ily traian 8we4LvNSt */     int A[100001],B[100001],m=0,n=0;
/* rTLjMqY5k ily traian 8we4LvNSt */     char c;
/* rTLjMqY5k ily traian 8we4LvNSt */     cin>>s;
/* rTLjMqY5k ily traian 8we4LvNSt */     for(int i=0;s[i];i++)
/* rTLjMqY5k ily traian 8we4LvNSt */         A[++n]=s[i]-'0';
/* rTLjMqY5k ily traian 8we4LvNSt */     for(int i=1;i<=n/2;i++)
/* rTLjMqY5k ily traian 8we4LvNSt */         swap(A[i],A[n-i+1]);
/* rTLjMqY5k ily traian 8we4LvNSt */     cin>>s;
/* rTLjMqY5k ily traian 8we4LvNSt */     for(int i=0;s[i];i++)
/* rTLjMqY5k ily traian 8we4LvNSt */         B[++m]=s[i]-'0';
/* rTLjMqY5k ily traian 8we4LvNSt */     for(int i=1;i<=m/2;i++)
/* rTLjMqY5k ily traian 8we4LvNSt */         swap(B[i],B[m-i+1]);
/* rTLjMqY5k ily traian 8we4LvNSt */     cin>>c;
/* rTLjMqY5k ily traian 8we4LvNSt */     if(c=='+')
/* rTLjMqY5k ily traian 8we4LvNSt */     {
/* rTLjMqY5k ily traian 8we4LvNSt */         //adun pe B la A
/* rTLjMqY5k ily traian 8we4LvNSt */         if(m>n)
/* rTLjMqY5k ily traian 8we4LvNSt */             n=m;
/* rTLjMqY5k ily traian 8we4LvNSt */         int t=0;//transporturi
/* rTLjMqY5k ily traian 8we4LvNSt */         for(int i=1;i<=n;i++)
/* rTLjMqY5k ily traian 8we4LvNSt */         {
/* rTLjMqY5k ily traian 8we4LvNSt */             int c=A[i]+B[i]+t;
/* rTLjMqY5k ily traian 8we4LvNSt */             A[i]=c%10;//cifra
/* rTLjMqY5k ily traian 8we4LvNSt */             t=c/10;//transport
/* rTLjMqY5k ily traian 8we4LvNSt */         }
/* rTLjMqY5k ily traian 8we4LvNSt */         if(t>0)
/* rTLjMqY5k ily traian 8we4LvNSt */             A[++n]=t;
/* rTLjMqY5k ily traian 8we4LvNSt */         for(int i=n;i>=1;i--)
/* rTLjMqY5k ily traian 8we4LvNSt */             cout<<A[i];
/* rTLjMqY5k ily traian 8we4LvNSt */     }
/* rTLjMqY5k ily traian 8we4LvNSt */     else
/* rTLjMqY5k ily traian 8we4LvNSt */     {
/* rTLjMqY5k ily traian 8we4LvNSt */         for(int i=1;i<=n;i++)
/* rTLjMqY5k ily traian 8we4LvNSt */         {
/* rTLjMqY5k ily traian 8we4LvNSt */             if(A[i]-B[i]<0)
/* rTLjMqY5k ily traian 8we4LvNSt */                 A[i]+=10 , A[i+1]--;
/* rTLjMqY5k ily traian 8we4LvNSt */             int c=A[i]-B[i];
/* rTLjMqY5k ily traian 8we4LvNSt */             A[i]=c;
/* rTLjMqY5k ily traian 8we4LvNSt */         }
/* rTLjMqY5k ily traian 8we4LvNSt */         while(A[n]==0)
/* rTLjMqY5k ily traian 8we4LvNSt */             n--;
/* rTLjMqY5k ily traian 8we4LvNSt */         int ok=0;
/* rTLjMqY5k ily traian 8we4LvNSt */         for(int i=n;i>=1;i--)
/* rTLjMqY5k ily traian 8we4LvNSt */         {
/* rTLjMqY5k ily traian 8we4LvNSt */             cout<<A[i];
/* rTLjMqY5k ily traian 8we4LvNSt */             ok++;
/* rTLjMqY5k ily traian 8we4LvNSt */         }
/* rTLjMqY5k ily traian 8we4LvNSt */         if(!ok)
/* rTLjMqY5k ily traian 8we4LvNSt */             cout << 0;
/* rTLjMqY5k ily traian 8we4LvNSt */     }
/* rTLjMqY5k ily traian 8we4LvNSt */     return 0;
/* rTLjMqY5k ily traian 8we4LvNSt */ }