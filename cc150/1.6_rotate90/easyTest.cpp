#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;

const int kN = 25;
void rotate90(vector<vector<int> >&);
void printMatrix(vector<vector<int> >& vvi);
void initMatrix(vector<vector<int> >& vvi, const int size);


int main(){
	//vvi.size() is same as vi.size()
	vector<vector<int> > vvi;
    initMatrix(vvi, kN);
    printMatrix(vvi);
    rotate90(vvi);
    cout << endl;
    printMatrix(vvi);

	return 0;
}

void initMatrix(vector<vector<int> >& vvi, const int size){
    int value = 1;
    vvi.resize(size);
	for_each(vvi.begin(), vvi.end(), [&](vector<int> & vi){
            vi.resize(size);
			for_each(vi.begin(), vi.end(), [&](int &x){
				x = value++;});
			});
}

void printMatrix(vector<vector<int> >& vvi){
	for_each(vvi.begin(), vvi.end(), [](vector<int> & vi){
			for_each(vi.begin(), vi.end(), [](int x){
				cout << x << "\t";});
				cout << endl;
			});
}

void rotate90(vector<vector<int> >& vvi){
	const int kUpperMargin = (vvi.size() + 1) / 2;
	const int kLeftMargin = vvi.size() / 2;
	const int kMaxIndex = vvi.size() - 1;
	for(int line = 0; line < kUpperMargin; line++){
		for(int row = 0; row < kLeftMargin; row++){
			int temp = vvi[line][row];
			vvi[line][row] = vvi[kMaxIndex - row][line];
			vvi[kMaxIndex - line][row] = vvi[kMaxIndex - line][kMaxIndex - row];
			vvi[kMaxIndex - line][kMaxIndex - row] = vvi[row][kMaxIndex - line];
            vvi[row][kMaxIndex - line] = temp;
		}
	}
}

