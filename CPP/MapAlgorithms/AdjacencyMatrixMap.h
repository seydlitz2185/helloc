#include <iostream>
#include <cstring>

class Graph{
	private:
		int **mat;
		int n;
	
	public:
		Graphtint _n ){
			n = _n;
			mat = new int* [n];
			for (int i = 0; i< n ; i++){
				mat[i] = new int[n];
				memset(mat[i],0,sizeof(int)*n);

			}
		}

		~Graph(){
			for (int i = 0; i< n ; i++){
				delete[] mat[i];
			}
			delete[] mat;
		}

		void insert(int i, int j,int weight){
			if( i <n && j<n && weight >= 0){
				mat[i][j] = weight;
			}else(
				std::cerr << "Invalid index or weight!\n";
		}
}
