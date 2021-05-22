#include <algorithm> 
#include <iostream> 
 
struct etud{ 
int L, C;  }; 
 
bool trierbool (etud gauche, etud droite){ 
	return (gauche.L < droite.L); } 
 
bool trouvebool(etud all  ,int val){ 
	return all.L < val; } 
 
int main( ) { 
	int N, M, I, U, Ii, Ui, somme[100000], p[100000]; 
    etud e[100000], *Ia, *Ua;
	
    std::cin>> N ; 
 	
    for (int i = 0; i < N; i++ ){ 
    	std::cin>> e[i].L; 
    	std::cin>> e[i].C; } 
 
    std::sort(e, e + N, trierbool); 
	std::cin>> M; 
 
 	somme[0] = e[0].C; 
 
    int k = 1; 
 	for (etud* i = e+1; i < e+N; i++ ){ 
 		somme[k] = somme[k-1] + (*i).C; 
	    k++; } 
 
 	for (int i = 0; i < M; i++){
		std::cin>> I; 
		std::cin>> U; 
		
		Ia = std::lower_bound (e, e + N, I, trouvebool); 
    	Ua = std::lower_bound (e, e + N, U, trouvebool); 
		Ii = (&((*Ia).L)- &(e[0].L))/2 ; 
 		Ui = (&((*Ua).L)- &(e[0].L))/2 ; 
 
        if ( Ui == Ii &&  (*Ua).L != U ) 
        	p[i]=-1;
       
        else if (Ui == Ii && (*Ua).L == U)  
			p[i] = (*Ua).C ;
			 
		else if (Ui != Ii && (*Ua).L == U) { 
			if (Ii == 0) 
				p[i] = (somme[Ui-1] )/(Ui-Ii); 
			else 
				p[i] = (somme[Ui] - somme[Ii-1] )/(Ui-Ii);  }
				  
 		else { 
			if (Ii == 0) 
				p[i] = (somme[Ui-1] )/(Ui-Ii);   
			else
				p[i] = (somme[Ui-1] - somme[Ii-1] )/(Ui-Ii);  }  
	} 
 
 
    for (int i=0; i<M; i++) 
		std::cout<< p[i]<<"\n";  
 
	return 0; 
} 

