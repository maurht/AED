#include <iostream>
#include <algorithm>

void f(int* ini, int* fin){
	if( fin- ini > 2 ){
	 	std::reverse(ini, fin);
	 	int* p = std::find(ini, fin, 0);
	 	if (p != fin){
	 		*p = 1;
	 		f(ini, p);
	 		f(p+1, fin);
		 }
	}
}


int main(){
int N;
std::cin>>N;

int arr[N];
for (int i=0; i<N; i++){
	std::cin>> arr[i]; }

f( &arr[0], &arr[0] + N);

for (int i=0; i<N; i++){
	std::cout<< arr[i]<<" "; }

return 0;
}
