#include <iostream>
#include <string>
using namespace std;

class DynIntMatrix
{
    private:
        int **myMatrix;
        int rows;
        int cols;
    public:
       DynIntMatrix(int m, int n){
          myMatrix = new int*[m*n];
           for (int i = 0; i < m; i++){
                myMatrix[i] = new int[n];
                for (int j = 0; j < n; j++)
                    myMatrix[i][j] = 0;
            }

            rows = m;
            cols = n;
       }
        DynIntMatrix(const DynIntMatrix & copyMatrix);
        ~DynIntMatrix(){};

        DynIntMatrix& operator = (const DynIntMatrix& oMat)
        {
            if (this == &oMat)
                return *this;

            if(rows != oMat.rows || cols != oMat.cols){
                cerr << "Dimensions must match";
                return *this;
            }

            for (int i = 0; i < rows; i++){
                myMatrix[i] = new int[cols];
                for (int j = 0; j < cols; j++)
                    myMatrix[i][j] = oMat.myMatrix[i][j];
            }

            return *this;
        }

        void print(){
              for (int i = 0; i < rows; i++){
                for (int j = 0; j < cols; j++){
                    cout << myMatrix[i][j];
                    if(j < cols -1) cout << ",";
                }
                cout << endl;
            }
        }

        void set(int m, int n, int v){
            myMatrix[m][n] = v;
        }

        friend std::ostream& operator<< (std::ostream& stream, const DynIntMatrix& matrix) {
             for (int i = 0; i < matrix.rows; i++){
                for (int j = 0; j < matrix.cols; j++){
                    cout << matrix.myMatrix[i][j];
                    if(j < matrix.cols - 1) cout << ",";
                }
                cout << endl;
            }

                        return stream;
        }

         friend std::istream& operator >>(std::istream& stream, const DynIntMatrix& matrix) 
         {
            for(int i = 0; i < matrix.rows; i++){
                for(int j = 0; j < matrix.cols; j++){
                    cin >> matrix.myMatrix[i][j];
                }
            }

            return stream;
        }

};

int main(){
    DynIntMatrix m(5,5);
        m.set(0,0,3);
    m.print();
    DynIntMatrix n(5,5);
    n = m;
    cin >> n;
    cout << n;

}