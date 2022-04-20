// 396, 397, 399
// Suryo Bintoro, Heryana Dimas A, M Sidiq Hardiansyah

#include<iostream>
using namespace std;

class Fibonacci{
	public:
		long deret(int);
		long fibo(int);
		
	private:
		int n;
		
};

long Fibonacci::deret(int n) {
  long fib_sub, f1=0, f2=1;
  cout << "- Rekursif  -" <<endl;
  cout << "Nilai Fibonacci : ";
     for(int i=0; i<n; i++){
        fib_sub = f1 + f2;
        f2 = f1;
        f1 = fib_sub;
        cout << fib_sub <<" ";
    }
}

long Fibonacci::fibo(int n) {
	if(n==0 || n==1) {
		return (1);	
	} else {
    	return (fibo(n-1) + fibo(n-2));
  }
}

int main(){
	int p;
	long hasil;
	Fibonacci x;
	cout << "Masukkan Bilangan : ";
	cin >> p;
	x.deret(p);
	cout << endl <<endl;
	cout << "- Iteratif -" <<endl ;
	cout  << "Nilai Fibonacci : ";
	for(int i=0; i<p; i++) {
		cout << x.fibo(i) <<" ";
	}
 	return 0;
}
