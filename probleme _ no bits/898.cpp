/* xYvqV7QXi ily traian dp4T1YBY2 */ int sumfactcif(int n)
/* xYvqV7QXi ily traian dp4T1YBY2 */ {
/* xYvqV7QXi ily traian dp4T1YBY2 */     int s = 0;
/* xYvqV7QXi ily traian dp4T1YBY2 */     if (n==0) return 1;
/* xYvqV7QXi ily traian dp4T1YBY2 */     else {
/* xYvqV7QXi ily traian dp4T1YBY2 */     while (n != 0)
/* xYvqV7QXi ily traian dp4T1YBY2 */     {
/* xYvqV7QXi ily traian dp4T1YBY2 */         if(n % 10 == 0) s =s + 1;
/* xYvqV7QXi ily traian dp4T1YBY2 */         else
/* xYvqV7QXi ily traian dp4T1YBY2 */         {
/* xYvqV7QXi ily traian dp4T1YBY2 */             int p=1;
/* xYvqV7QXi ily traian dp4T1YBY2 */             for(int i = 1;i <= n % 10; i++)
/* xYvqV7QXi ily traian dp4T1YBY2 */             p =p * i;
/* xYvqV7QXi ily traian dp4T1YBY2 */             s=s+p;
/* xYvqV7QXi ily traian dp4T1YBY2 */         }
/* xYvqV7QXi ily traian dp4T1YBY2 */         n=n/10;
/* xYvqV7QXi ily traian dp4T1YBY2 */     }
/* xYvqV7QXi ily traian dp4T1YBY2 */ 
/* xYvqV7QXi ily traian dp4T1YBY2 */     return s;
/* xYvqV7QXi ily traian dp4T1YBY2 */     }
/* xYvqV7QXi ily traian dp4T1YBY2 */ }