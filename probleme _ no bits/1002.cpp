/* tsaacjY7X ily traian s2rlGVtZs */ #include <iostream>
/* tsaacjY7X ily traian s2rlGVtZs */ 
/* tsaacjY7X ily traian s2rlGVtZs */ const int volume = 792;
/* tsaacjY7X ily traian s2rlGVtZs */ 
/* tsaacjY7X ily traian s2rlGVtZs */ int main() {
/* tsaacjY7X ily traian s2rlGVtZs */ 
/* tsaacjY7X ily traian s2rlGVtZs */ 	// freopen("inputf.in", "r", stdin);
/* tsaacjY7X ily traian s2rlGVtZs */ 	// freopen("outputf.in", "w", stdout);
/* tsaacjY7X ily traian s2rlGVtZs */ 	
/* tsaacjY7X ily traian s2rlGVtZs */ 	int n;
/* tsaacjY7X ily traian s2rlGVtZs */ 	int pages = 0;
/* tsaacjY7X ily traian s2rlGVtZs */ 	int result;
/* tsaacjY7X ily traian s2rlGVtZs */ 	int temp;
/* tsaacjY7X ily traian s2rlGVtZs */ 
/* tsaacjY7X ily traian s2rlGVtZs */ 	std :: cin >> n;
/* tsaacjY7X ily traian s2rlGVtZs */ 
/* tsaacjY7X ily traian s2rlGVtZs */ 	if (n >= volume) {
/* tsaacjY7X ily traian s2rlGVtZs */ 		if (n % volume != 0)
/* tsaacjY7X ily traian s2rlGVtZs */ 			temp = n / volume + 1;
/* tsaacjY7X ily traian s2rlGVtZs */ 		else
/* tsaacjY7X ily traian s2rlGVtZs */ 			temp = n / volume;
/* tsaacjY7X ily traian s2rlGVtZs */ 		
/* tsaacjY7X ily traian s2rlGVtZs */ 		result = n % volume;
/* tsaacjY7X ily traian s2rlGVtZs */ 
/* tsaacjY7X ily traian s2rlGVtZs */ 		if (result < 10) {
/* tsaacjY7X ily traian s2rlGVtZs */ 			pages = result;
/* tsaacjY7X ily traian s2rlGVtZs */ 		} else {
/* tsaacjY7X ily traian s2rlGVtZs */ 			pages = 9;
/* tsaacjY7X ily traian s2rlGVtZs */ 			result -= 9;
/* tsaacjY7X ily traian s2rlGVtZs */ 			if (result < 181) {
/* tsaacjY7X ily traian s2rlGVtZs */ 				if (result % 2 == 0)	
/* tsaacjY7X ily traian s2rlGVtZs */                		pages += result / 2;
/* tsaacjY7X ily traian s2rlGVtZs */                 else {
/* tsaacjY7X ily traian s2rlGVtZs */                 	std :: cout << "IMPOSIBIL";
/* tsaacjY7X ily traian s2rlGVtZs */                     return 0;
/* tsaacjY7X ily traian s2rlGVtZs */                 }
/* tsaacjY7X ily traian s2rlGVtZs */ 			} else {
/* tsaacjY7X ily traian s2rlGVtZs */                 pages = 99;
/* tsaacjY7X ily traian s2rlGVtZs */ 				result -= 180;
/* tsaacjY7X ily traian s2rlGVtZs */                 if (result % 3 == 0)
/* tsaacjY7X ily traian s2rlGVtZs */ 					pages += result / 3;
/* tsaacjY7X ily traian s2rlGVtZs */                 else {
/* tsaacjY7X ily traian s2rlGVtZs */                     std :: cout << "IMPOSIBIL";
/* tsaacjY7X ily traian s2rlGVtZs */                     return 0;
/* tsaacjY7X ily traian s2rlGVtZs */                 }
/* tsaacjY7X ily traian s2rlGVtZs */ 			}
/* tsaacjY7X ily traian s2rlGVtZs */ 		
/* tsaacjY7X ily traian s2rlGVtZs */ 		}
/* tsaacjY7X ily traian s2rlGVtZs */ 
/* tsaacjY7X ily traian s2rlGVtZs */ 		std :: cout << temp << ' ';
/* tsaacjY7X ily traian s2rlGVtZs */ 		if (n % volume == 0) {
/* tsaacjY7X ily traian s2rlGVtZs */ 			std :: cout << 300;
/* tsaacjY7X ily traian s2rlGVtZs */ 		} else {
/* tsaacjY7X ily traian s2rlGVtZs */ 			std :: cout << pages;
/* tsaacjY7X ily traian s2rlGVtZs */ 		}
/* tsaacjY7X ily traian s2rlGVtZs */ 	} else {
/* tsaacjY7X ily traian s2rlGVtZs */ 		std :: cout << "IMPOSIBIL";
/* tsaacjY7X ily traian s2rlGVtZs */ 	}
/* tsaacjY7X ily traian s2rlGVtZs */ 	return 0;
/* tsaacjY7X ily traian s2rlGVtZs */ }
/* tsaacjY7X ily traian s2rlGVtZs */ }