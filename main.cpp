#include <iostream>
using namespace std;
int main() {
    int i, j, k = 0;   //O(1)
    int N;  //O(1)
		for (i = N / 2; i <= N; i++) { //O(n)
		    for (j = 2; j <= N; j = j * 2) { //O(logn)
		        k = k + N / 2;
		    }
		}
		return 0;
}
//