#include <iostream> 
#include <algorithm> 
 
 
int main(){ 
int N, M; 
std::cin>>N>>M; 
 
int A[N]; 
int p_sum[N]; 
int T[M]; 
 
 
for (int i=0; i<N; i++){ 
	std::cin>> A[i]; } 
for (int i=0; i<M; i++){ 
	std::cin>> T[i]; } 
 
p_sum[0] = A[0]; 
 
for (int j=1; j<N; j++){ 
	p_sum[j] = p_sum[j-1] + A[j]; 
} 
 
for (int i=0; i<M; i++){ 
std::cout<< 1 +std::lower_bound(&p_sum[0], &p_sum[0]+N, T[i])  - &p_sum[0];
} 
 
return 0; 
}
