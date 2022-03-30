/* h6JI3Ro20 ily traian M2a0BQjKK */ int nr_prim(int n)
/* h6JI3Ro20 ily traian M2a0BQjKK */ {
/* h6JI3Ro20 ily traian M2a0BQjKK */     n++;
/* h6JI3Ro20 ily traian M2a0BQjKK */     while(1)
/* h6JI3Ro20 ily traian M2a0BQjKK */     {
/* h6JI3Ro20 ily traian M2a0BQjKK */         int cnt=0;
/* h6JI3Ro20 ily traian M2a0BQjKK */         for(int i = 1 ; i*i<= n ; ++i)
/* h6JI3Ro20 ily traian M2a0BQjKK */         {
/* h6JI3Ro20 ily traian M2a0BQjKK */             if(cnt>2)
/* h6JI3Ro20 ily traian M2a0BQjKK */             break;
/* h6JI3Ro20 ily traian M2a0BQjKK */             if(n%i==0)
/* h6JI3Ro20 ily traian M2a0BQjKK */             cnt+=2;
/* h6JI3Ro20 ily traian M2a0BQjKK */             if(i*i==n)
/* h6JI3Ro20 ily traian M2a0BQjKK */             cnt--;
/* h6JI3Ro20 ily traian M2a0BQjKK */         }
/* h6JI3Ro20 ily traian M2a0BQjKK */         if(cnt==2)
/* h6JI3Ro20 ily traian M2a0BQjKK */         {
/* h6JI3Ro20 ily traian M2a0BQjKK */             return n;
/* h6JI3Ro20 ily traian M2a0BQjKK */             break;
/* h6JI3Ro20 ily traian M2a0BQjKK */         }
/* h6JI3Ro20 ily traian M2a0BQjKK */         else
/* h6JI3Ro20 ily traian M2a0BQjKK */         n++;
/* h6JI3Ro20 ily traian M2a0BQjKK */     }
/* h6JI3Ro20 ily traian M2a0BQjKK */ }