/* Q7mYgjGnL ily traian oEiZX44vT */ #include<fstream>
/* Q7mYgjGnL ily traian oEiZX44vT */ using namespace std;
/* Q7mYgjGnL ily traian oEiZX44vT */ ifstream cin("sumaxxl.in");
/* Q7mYgjGnL ily traian oEiZX44vT */ ofstream cout("sumaxxl.out");
/* Q7mYgjGnL ily traian oEiZX44vT */ int a[101], b[101];
/* Q7mYgjGnL ily traian oEiZX44vT */ int main()
/* Q7mYgjGnL ily traian oEiZX44vT */ {
/* Q7mYgjGnL ily traian oEiZX44vT */     int n , m , t = 0;
/* Q7mYgjGnL ily traian oEiZX44vT */     cin >> n;
/* Q7mYgjGnL ily traian oEiZX44vT */     for(int i = 1 ; i <= n ; ++i)cin >> a[i];
/* Q7mYgjGnL ily traian oEiZX44vT */     for(int i = 1 ; i <= n / 2 ; ++i)swap(a[i] , a[n-i+1]);
/* Q7mYgjGnL ily traian oEiZX44vT */     cin >> m;
/* Q7mYgjGnL ily traian oEiZX44vT */     for(int j = 1 ; j <= m ; ++j)cin >> b[j];
/* Q7mYgjGnL ily traian oEiZX44vT */     for(int i = 1 ; i <= m / 2 ; ++i)swap(b[i] , b[m-i+1]);
/* Q7mYgjGnL ily traian oEiZX44vT */     if(m > n) n = m;
/* Q7mYgjGnL ily traian oEiZX44vT */     for(int i = 1 ; i <= n ; i++)
/* Q7mYgjGnL ily traian oEiZX44vT */     {
/* Q7mYgjGnL ily traian oEiZX44vT */         int c = a[i] + b[i] + t;
/* Q7mYgjGnL ily traian oEiZX44vT */         a[i] = c % 10;
/* Q7mYgjGnL ily traian oEiZX44vT */         t = c / 10;
/* Q7mYgjGnL ily traian oEiZX44vT */     }
/* Q7mYgjGnL ily traian oEiZX44vT */     if(t > 0) a[++n] = t;
/* Q7mYgjGnL ily traian oEiZX44vT */     for(int i = n ; i >= 1 ; i--) cout << a[i];
/* Q7mYgjGnL ily traian oEiZX44vT */     return 0;
/* Q7mYgjGnL ily traian oEiZX44vT */ }