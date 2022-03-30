/* NHmqaMFaa ily traian 42EByMRRG */ void triplete(int n)
/* NHmqaMFaa ily traian 42EByMRRG */ {
/* NHmqaMFaa ily traian 42EByMRRG */     for(int d = 1 ; d * d <= n ; ++d)
/* NHmqaMFaa ily traian 42EByMRRG */     {
/* NHmqaMFaa ily traian 42EByMRRG */         if(n % d == 0)
/* NHmqaMFaa ily traian 42EByMRRG */         {
/* NHmqaMFaa ily traian 42EByMRRG */             int y = d;
/* NHmqaMFaa ily traian 42EByMRRG */             for(int x = 0 ; x < d ; ++x)
/* NHmqaMFaa ily traian 42EByMRRG */             {
/* NHmqaMFaa ily traian 42EByMRRG */                 int z = n / y - x;
/* NHmqaMFaa ily traian 42EByMRRG */                 if(x * y + y * z == n && z > y)
/* NHmqaMFaa ily traian 42EByMRRG */                     cout << '(' << x << ',' << y << ',' << z << ')' << '\n';
/* NHmqaMFaa ily traian 42EByMRRG */             }
/* NHmqaMFaa ily traian 42EByMRRG */         }
/* NHmqaMFaa ily traian 42EByMRRG */     }
/* NHmqaMFaa ily traian 42EByMRRG */ }