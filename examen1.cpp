#include "iostream"


int main(){
int N, M;	
	
std::cin>> N >> M;

int arr[N];

for (int i=0; i < N; i++){
	std::cin >> arr[i];
} 

int S=0, sec;
for (int j = 0; j < M; j++){
	std::cin>> sec; 
	S += sec;
}

for (int i=0; i < N; i++){
	std::cout<< arr[i] + S<< " ";
} 
	
return 0;
}
