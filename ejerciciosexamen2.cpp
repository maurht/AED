#include "iostream"
#include<algorithm>

int main(){
int N;
std::cin>>N;

int arr[N];
for (int i=0; i<N; i++){
	std::cin>> arr[i]; }

int* p = std::find(&arr[0],&arr[0]+N, 0);

int premier = 1;
int* copie;

while (p != &arr[0] + N ){
	copie = p;
	p = std::find(p+1,&arr[0]+N, premier);
	++premier;
}

std::cout<< *copie ;

return 0;
}
