/* Cl5a4WxpF ily traian lqx0hDEoJ */ #include<fstream>
/* Cl5a4WxpF ily traian lqx0hDEoJ */ #include<vector>
/* Cl5a4WxpF ily traian lqx0hDEoJ */ using namespace std;
/* Cl5a4WxpF ily traian lqx0hDEoJ */ 
/* Cl5a4WxpF ily traian lqx0hDEoJ */ ifstream fin("ateleport.in");
/* Cl5a4WxpF ily traian lqx0hDEoJ */ ofstream fout("ateleport.out");
/* Cl5a4WxpF ily traian lqx0hDEoJ */ 
/* Cl5a4WxpF ily traian lqx0hDEoJ */ struct muchie{
/* Cl5a4WxpF ily traian lqx0hDEoJ */     int nod;
/* Cl5a4WxpF ily traian lqx0hDEoJ */     int timp;
/* Cl5a4WxpF ily traian lqx0hDEoJ */ };
/* Cl5a4WxpF ily traian lqx0hDEoJ */ 
/* Cl5a4WxpF ily traian lqx0hDEoJ */ struct element{
/* Cl5a4WxpF ily traian lqx0hDEoJ */     int nod;
/* Cl5a4WxpF ily traian lqx0hDEoJ */     int timp;
/* Cl5a4WxpF ily traian lqx0hDEoJ */     int muchii_teleportarea_curenta;
/* Cl5a4WxpF ily traian lqx0hDEoJ */     int teleportari;
/* Cl5a4WxpF ily traian lqx0hDEoJ */     bool operator<(const element &x) const
/* Cl5a4WxpF ily traian lqx0hDEoJ */     {
/* Cl5a4WxpF ily traian lqx0hDEoJ */         return timp < x.timp;
/* Cl5a4WxpF ily traian lqx0hDEoJ */     }
/* Cl5a4WxpF ily traian lqx0hDEoJ */ };
/* Cl5a4WxpF ily traian lqx0hDEoJ */ 
/* Cl5a4WxpF ily traian lqx0hDEoJ */ struct min_heap{
/* Cl5a4WxpF ily traian lqx0hDEoJ */     element v[1000001];
/* Cl5a4WxpF ily traian lqx0hDEoJ */     int size = 0;
/* Cl5a4WxpF ily traian lqx0hDEoJ */ 
/* Cl5a4WxpF ily traian lqx0hDEoJ */     element top()
/* Cl5a4WxpF ily traian lqx0hDEoJ */     {
/* Cl5a4WxpF ily traian lqx0hDEoJ */         return v[1];
/* Cl5a4WxpF ily traian lqx0hDEoJ */     }
/* Cl5a4WxpF ily traian lqx0hDEoJ */ 
/* Cl5a4WxpF ily traian lqx0hDEoJ */     void push(element el)
/* Cl5a4WxpF ily traian lqx0hDEoJ */     {
/* Cl5a4WxpF ily traian lqx0hDEoJ */         size++;
/* Cl5a4WxpF ily traian lqx0hDEoJ */         v[size] = el;
/* Cl5a4WxpF ily traian lqx0hDEoJ */         int pos = size;
/* Cl5a4WxpF ily traian lqx0hDEoJ */         while(pos != 1)
/* Cl5a4WxpF ily traian lqx0hDEoJ */             if(v[pos] < v[pos/2])
/* Cl5a4WxpF ily traian lqx0hDEoJ */                 swap(v[pos/2],v[pos]), pos/=2;
/* Cl5a4WxpF ily traian lqx0hDEoJ */             else
/* Cl5a4WxpF ily traian lqx0hDEoJ */                 break;
/* Cl5a4WxpF ily traian lqx0hDEoJ */     }
/* Cl5a4WxpF ily traian lqx0hDEoJ */ 
/* Cl5a4WxpF ily traian lqx0hDEoJ */     void pop()
/* Cl5a4WxpF ily traian lqx0hDEoJ */     {
/* Cl5a4WxpF ily traian lqx0hDEoJ */         if(size == 0)
/* Cl5a4WxpF ily traian lqx0hDEoJ */             return;
/* Cl5a4WxpF ily traian lqx0hDEoJ */         swap(v[1],v[size]);
/* Cl5a4WxpF ily traian lqx0hDEoJ */         size--;
/* Cl5a4WxpF ily traian lqx0hDEoJ */         int pos = 1;
/* Cl5a4WxpF ily traian lqx0hDEoJ */         while(pos*2+1 <= size)
/* Cl5a4WxpF ily traian lqx0hDEoJ */         {
/* Cl5a4WxpF ily traian lqx0hDEoJ */ 
/* Cl5a4WxpF ily traian lqx0hDEoJ */             if(v[pos*2] < v[pos] && v[pos*2] < v[pos*2+1])
/* Cl5a4WxpF ily traian lqx0hDEoJ */                 swap(v[pos*2], v[pos]), pos = pos*2;
/* Cl5a4WxpF ily traian lqx0hDEoJ */             else if(v[pos*2+1] < v[pos])
/* Cl5a4WxpF ily traian lqx0hDEoJ */                 swap(v[pos*2+1], v[pos]), pos = pos*2+1;
/* Cl5a4WxpF ily traian lqx0hDEoJ */             else
/* Cl5a4WxpF ily traian lqx0hDEoJ */                 break;
/* Cl5a4WxpF ily traian lqx0hDEoJ */         }
/* Cl5a4WxpF ily traian lqx0hDEoJ */         if(pos*2 == size && v[pos*2] < v[pos])
/* Cl5a4WxpF ily traian lqx0hDEoJ */             swap(v[pos*2], v[pos]);
/* Cl5a4WxpF ily traian lqx0hDEoJ */     }
/* Cl5a4WxpF ily traian lqx0hDEoJ */ 
/* Cl5a4WxpF ily traian lqx0hDEoJ */ };
/* Cl5a4WxpF ily traian lqx0hDEoJ */ int n,m,p,l,k;
/* Cl5a4WxpF ily traian lqx0hDEoJ */ int timp_minim[10001][11][11];
/* Cl5a4WxpF ily traian lqx0hDEoJ */ vector<muchie> muchii[10001];
/* Cl5a4WxpF ily traian lqx0hDEoJ */ min_heap myHeap;
/* Cl5a4WxpF ily traian lqx0hDEoJ */ 
/* Cl5a4WxpF ily traian lqx0hDEoJ */ void update(element &y)
/* Cl5a4WxpF ily traian lqx0hDEoJ */ {
/* Cl5a4WxpF ily traian lqx0hDEoJ */     if(y.timp < timp_minim[y.nod][y.teleportari][y.muchii_teleportarea_curenta])
/* Cl5a4WxpF ily traian lqx0hDEoJ */     {
/* Cl5a4WxpF ily traian lqx0hDEoJ */         timp_minim[y.nod][y.teleportari][y.muchii_teleportarea_curenta] = y.timp;
/* Cl5a4WxpF ily traian lqx0hDEoJ */         myHeap.push(y);
/* Cl5a4WxpF ily traian lqx0hDEoJ */     }
/* Cl5a4WxpF ily traian lqx0hDEoJ */ }
/* Cl5a4WxpF ily traian lqx0hDEoJ */ 
/* Cl5a4WxpF ily traian lqx0hDEoJ */ int main()
/* Cl5a4WxpF ily traian lqx0hDEoJ */ {
/* Cl5a4WxpF ily traian lqx0hDEoJ */     fin >> n >> m >> p >> l >> k;
/* Cl5a4WxpF ily traian lqx0hDEoJ */     for(int i = 1; i <= m; i++)
/* Cl5a4WxpF ily traian lqx0hDEoJ */     {
/* Cl5a4WxpF ily traian lqx0hDEoJ */         int x,y,t;
/* Cl5a4WxpF ily traian lqx0hDEoJ */         fin >> x >> y >> t;
/* Cl5a4WxpF ily traian lqx0hDEoJ */         muchii[x].push_back(muchie{y,t});
/* Cl5a4WxpF ily traian lqx0hDEoJ */         muchii[y].push_back(muchie{x,t});
/* Cl5a4WxpF ily traian lqx0hDEoJ */     }
/* Cl5a4WxpF ily traian lqx0hDEoJ */ 
/* Cl5a4WxpF ily traian lqx0hDEoJ */     for(int x = 0; x <= n; x++)
/* Cl5a4WxpF ily traian lqx0hDEoJ */         for(int y = 0; y <= 10; y++)
/* Cl5a4WxpF ily traian lqx0hDEoJ */             for(int z = 0; z <= 10; z++)
/* Cl5a4WxpF ily traian lqx0hDEoJ */                 timp_minim[x][y][z] = 2000000000;
/* Cl5a4WxpF ily traian lqx0hDEoJ */ 
/* Cl5a4WxpF ily traian lqx0hDEoJ */     myHeap.push(element{1,0,0,0});
/* Cl5a4WxpF ily traian lqx0hDEoJ */     timp_minim[1][0][0] = 0;
/* Cl5a4WxpF ily traian lqx0hDEoJ */     while(myHeap.size > 0)
/* Cl5a4WxpF ily traian lqx0hDEoJ */     {
/* Cl5a4WxpF ily traian lqx0hDEoJ */         element x;
/* Cl5a4WxpF ily traian lqx0hDEoJ */         x = myHeap.top();
/* Cl5a4WxpF ily traian lqx0hDEoJ */         myHeap.pop();
/* Cl5a4WxpF ily traian lqx0hDEoJ */ 
/* Cl5a4WxpF ily traian lqx0hDEoJ */         if(timp_minim[x.nod][x.teleportari][x.muchii_teleportarea_curenta] < x.timp)
/* Cl5a4WxpF ily traian lqx0hDEoJ */             continue;
/* Cl5a4WxpF ily traian lqx0hDEoJ */ 
/* Cl5a4WxpF ily traian lqx0hDEoJ */         if(x.nod == n)
/* Cl5a4WxpF ily traian lqx0hDEoJ */         {
/* Cl5a4WxpF ily traian lqx0hDEoJ */             fout << x.timp;
/* Cl5a4WxpF ily traian lqx0hDEoJ */             return 0;
/* Cl5a4WxpF ily traian lqx0hDEoJ */         }
/* Cl5a4WxpF ily traian lqx0hDEoJ */ 
/* Cl5a4WxpF ily traian lqx0hDEoJ */         for(int i = 0; i < muchii[x.nod].size(); i++)
/* Cl5a4WxpF ily traian lqx0hDEoJ */         {
/* Cl5a4WxpF ily traian lqx0hDEoJ */             element y;
/* Cl5a4WxpF ily traian lqx0hDEoJ */             y.nod = muchii[x.nod][i].nod;
/* Cl5a4WxpF ily traian lqx0hDEoJ */ 
/* Cl5a4WxpF ily traian lqx0hDEoJ */             if(x.teleportari < k)
/* Cl5a4WxpF ily traian lqx0hDEoJ */             {
/* Cl5a4WxpF ily traian lqx0hDEoJ */                 y.timp = x.timp + p;
/* Cl5a4WxpF ily traian lqx0hDEoJ */                 y.muchii_teleportarea_curenta = 1;
/* Cl5a4WxpF ily traian lqx0hDEoJ */                 y.teleportari = x.teleportari + 1;
/* Cl5a4WxpF ily traian lqx0hDEoJ */                 update(y);
/* Cl5a4WxpF ily traian lqx0hDEoJ */             }
/* Cl5a4WxpF ily traian lqx0hDEoJ */ 
/* Cl5a4WxpF ily traian lqx0hDEoJ */             if(x.muchii_teleportarea_curenta > 0 && x.muchii_teleportarea_curenta < l)
/* Cl5a4WxpF ily traian lqx0hDEoJ */             {
/* Cl5a4WxpF ily traian lqx0hDEoJ */                     y.timp = x.timp;
/* Cl5a4WxpF ily traian lqx0hDEoJ */                     y.muchii_teleportarea_curenta = x.muchii_teleportarea_curenta + 1;
/* Cl5a4WxpF ily traian lqx0hDEoJ */                     y.teleportari = x.teleportari;
/* Cl5a4WxpF ily traian lqx0hDEoJ */                     update(y);
/* Cl5a4WxpF ily traian lqx0hDEoJ */             }
/* Cl5a4WxpF ily traian lqx0hDEoJ */ 
/* Cl5a4WxpF ily traian lqx0hDEoJ */             y.timp = x.timp + muchii[x.nod][i].timp;
/* Cl5a4WxpF ily traian lqx0hDEoJ */             y.teleportari = x.teleportari;
/* Cl5a4WxpF ily traian lqx0hDEoJ */             y.muchii_teleportarea_curenta = 0;
/* Cl5a4WxpF ily traian lqx0hDEoJ */             update(y);
/* Cl5a4WxpF ily traian lqx0hDEoJ */         }
/* Cl5a4WxpF ily traian lqx0hDEoJ */     }
/* Cl5a4WxpF ily traian lqx0hDEoJ */     return 0;
/* Cl5a4WxpF ily traian lqx0hDEoJ */ }