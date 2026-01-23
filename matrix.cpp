#include<iostream>
using namespace std;

class MATRIX{
    int m, n;
    int** mat;
    public:
    void setSize(){
        cout<<"Enter the size of the matrix:"<<endl;
        cout<<"m: ";
        cin>>m;
        cout<<"n: ";
        cin>>n;
        mat = new int*[m]; // Array of pointers
        for (int i = 0; i < m; ++i) {
            mat[i] = new int[n]; // Individual rows
        }
    }
    MATRIX(){
        
    }
    MATRIX(int m, int n){
        this->m = m;
        this->n = n;
        mat = new int*[m]; // Array of pointers
        for (int i = 0; i < m; ++i) {
            mat[i] = new int[n]; // Individual rows
        }
    }
    void setDetails(){
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cout<<"Enter the value in the matrix at "<<i+1<<", "<<j+1<<": ";
                cin>>mat[i][j];
            }
        }
    }
    void show(){
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    MATRIX operator +(MATRIX m1){
        MATRIX temp(m, n);
        if(m == m1.m && n == m1.n){
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    temp.mat[i][j] = mat[i][j] + m1.mat[i][j];
                }
            }
            temp.show();
        } else {
            cout<<"Size of both matrices are different!"<<endl;
        }
    }
    MATRIX operator -(MATRIX m1){
        MATRIX temp(m, n);
        if(m == m1.m && n == m1.n){
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    temp.mat[i][j] = mat[i][j] - m1.mat[i][j];
                }
            }
            temp.show();
        } else {
            cout<<"Size of both matrices are different!"<<endl;
        }
    }
};

int main(){
 
    MATRIX m2;
    m2.setSize();
    m2.setDetails();
    MATRIX m3(1, 2);
    m3.setDetails();

    m2.show();
    m3.show();

    MATRIX m4 = m2 + m3;
    
    MATRIX m5 = m3 - m2;

    return 0;
}