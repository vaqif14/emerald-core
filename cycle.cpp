#include <cstdio>

using namespace std;

int main (){
	for (int month=1; month<2; month++){
		for (int day=1; day<2; day++){
			for (int h=3; h<4; h++){
				for (int m=45; m<46; m+=10){
					int beg = 580, end = 630;
					for (int t=beg; t<=end; t+=1){
						printf ("%d %d %d %d ", month, day, h, m);
						printf("%d\n", t);
					}

					for (int t=end; t>=beg; t-=1){
						printf ("%d %d %d %d ", month, day, h, m);
						printf("%d\n", t);
					}

					// for (int t=0; t<300; t+=1){
					// 	printf ("%d %d %d %d ", month, day, h, m);
					// 	printf("%d\n", t);
					// }
				}
			}
		}
	}
	printf("0 0 0 0\n");
}