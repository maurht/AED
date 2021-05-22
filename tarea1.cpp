#include "iostream"
using namespace std;

int main(){
	
	int n,m,i,f;
	cin >> n;
	cin >> m;
	
	int arr[n+1]={0}; 
	
	for (int j = 0; j < m; j++){			
		cin >> i >> f;
		arr[i] = arr[i] +1;
		arr[f] = arr[f] -1;		
	}
	
	
	cout << arr[0]<<" ";
	
	for (int j = 1; j < n-1; j++){
		arr[j]= arr[j-1] + arr[j];
		cout << arr[j]<<" "; 
	}
	
	if(n>1){
	cout << arr[n-2] + arr[n-1]; }
	return 0;
}
