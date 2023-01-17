#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for(int i = 1 ; i < N ; i++){
	    cout << "Pass " <<i << ":";
	        T a = d[i];
	        int b = i-1;
	        
	while(a > d[b] and b >= 0){
	    d[b+1] = d[b];
	    --b;
	}
	d[b+1] = a;
	
		for(int i = 0; i < N; i++){
		    cout << d[i] << " ";   
		}cout << "\n";
	}

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
