#include <iostream>
#include <fstream>
using namespace std;

// initialize the weigth matrix W with the patterns 
void printw(int **W, int N)
{

  for (int i=0; i<N; i++)
  {
    for (int j=0; j<N; j++){
     cout << W[i][j] << " ";
    }
    cout << endl;
  }
}

void weigths(int **W, int *x0, int *x1, int *x2, int *x3, int *x4, int *x5, int *x6, int *x7, int *x8, int *x9,int *x10,int *x11, int *x12, int *x13, int *x14, int *x15, int *x16, int *x17, int *x18, int *x19, int *x20, int *x21,int *x22, int *x23, int N)
{

  for (int i=0; i<N; i++)
  for (int j=0; j<N; j++)
  {
    //W[i][j] = x0[i]*x0[j] + x1[i]*x1[j];
    W[i][j] = x0[i]*x0[j] + x1[i]*x1[j] + x2[i]*x2[j] + x3[i]*x3[j] + x4[i]*x4[j] + x5[i]*x5[j] + x6[i]*x6[j] + x7[i]*x7[j] + x8[i]*x8[j]  + x9[i]*x9[j] + x10[i]*x10[j] + x11[i]*x11[j] + x12[i]*x12[j] + x13[i]*x13[j] + x14[i]*x14[j] + x15[i]*x15[j] + x16[i]*x16[j] + x17[i]*x17[j] + x18[i]*x18[j] + x19[i]*x19[j] + x20[i]*x20[j] + x21[i]*x21[j] + x22[i]*x22[j] + x23[i]*x23[j];
  }
  for (int k=0; k<N; k++)
    W[k][k]=0;
}
// calculation of sum over j of W * S

void mul(int **W, int *s, int *h, int N){ 
  
  for (int i=0; i<N; i++){
    int sum=0;
    for (int j=0; j<N; j++){ 
      sum += W[i][j] * s[j];
    }
    h[i] = sum;
  }
}

// energy of the configuration - Ising model

int energy(int **W, int *s, int N){

  int E=0;
  for (int i=0; i<N; i++)
    for (int j=0; j<N; j++)
      E += W[i][j] * s[i] * s[j];
  return -E;
}

int sign(int y){
  if (y>0) return 1;
  else return -1;
}

int check(int *v1, int *v2, int N){

    for (int i=0; i<N; i++)
    {
      if (v1[i] != v2[i]) return 0;
    }
    return 1;
}

int readfile(string file, int *v1, int col, int N){
    std::ifstream infile(file);
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16;
    int row=0;
   
    while(infile >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9 >> a10 >> a11 >> a12 >> a13 >> a14 >> a15 >> a16) {
        std::cout << a1 << a2 << a3 << a4 << a5 << a6 << a7 << a8 << a9 << a10 << a11 << a12 << a13 << a14 << a15 << a16 << endl;
        v1[(row*col) + 0] = a1;
        v1[(row*col) + 1] = a2;
        v1[(row*col) + 2] = a3;
        v1[(row*col) + 3] = a4;
        v1[(row*col) + 4] = a5;
        v1[(row*col) + 5] = a6;
        v1[(row*col) + 6] = a7;
        v1[(row*col) + 7] = a8;
        v1[(row*col) + 8] = a9;
        v1[(row*col) + 9] = a10;
        v1[(row*col) + 10] = a11;
        v1[(row*col) + 11] = a12;
        v1[(row*col) + 12] = a13;
        v1[(row*col) + 13] = a14;
        v1[(row*col) + 14] = a15;
        v1[(row*col) + 15] = a16;
        
        row++;
   }

   for (int i=0; i<N; i++){ 
     if (v1[i] == 0)
       v1[i] = -1;
     cout << v1[i];
  
     if (((i+1)%col) == 0 )
       cout << endl;
   }
   cout << endl;
 return 0;
}

int main(void){
  int N = 256;
  int col = 16;
  int *x0 = new int[N];
  int *x1 = new int[N];
  int *x2 = new int[N];
  int *x3 = new int[N];
  int *x4 = new int[N];
  int *x5 = new int[N];
  int *x6 = new int[N];
  int *x7 = new int[N];
  int *x8 = new int[N];
  int *x9 = new int[N];
  int *x10 = new int[N];
  int *x11 = new int[N];
  int *x12 = new int[N];
  int *x13 = new int[N];
  int *x14 = new int[N];
  int *x15 = new int[N];
  int *x16 = new int[N];
  int *x17 = new int[N];
  int *x18 = new int[N];
  int *x19 = new int[N];
  int *x20 = new int[N];
  int *x21 = new int[N];
  int *x22 = new int[N];
  int *x23 = new int[N];

  cout << "iterations " << endl;

  readfile("A.txt", x0,  col, N);
  readfile("B.txt", x1,  col, N);
  readfile("C.txt", x2,  col, N);
  readfile("D.txt", x3,  col, N);
  readfile("E.txt", x4, col, N);
  readfile("F.txt", x5,  col, N);
  readfile("G.txt", x6,  col, N);
  readfile("H.txt", x7,  col, N);
  readfile("I.txt", x8,  col, N);
  readfile("J.txt", x9,  col, N);
  readfile("K.txt", x10,  col, N);
  readfile("L.txt", x11,  col, N);
  readfile("M.txt", x12,  col, N);
  readfile("N.txt", x13,  col, N);
  readfile("O.txt", x14, col, N);
  readfile("P.txt", x15,  col, N);
  readfile("Q.txt", x16,  col, N);
  readfile("R.txt", x17,  col, N);
  readfile("S.txt", x18,  col, N);
  readfile("T.txt", x19,  col, N);
  readfile("U.txt", x20,  col, N);
  readfile("V.txt", x21,  col, N);
  readfile("W.txt", x22,  col, N);
  readfile("X.txt", x23,  col, N);

  int **W = NULL;  // allocating memory for W
  W = new int *[N];
  for (int i=0; i<N; i++)
  {
    W[i] = new int[N];
  }

  for (int i=0; i<N; i++)
    for (int j=0; j<N; j++)
      W[i][j]=0;

  weigths(W, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, N);
  printw(W, N);

  int *s = new int[N]; // allocation memory for s

  readfile("E.txt", s,  col, N);
 
  int E = energy(W,s,N);
  cout << " energy of initial configuration : " << E << endl;

  int *h = new int[N]; // allocation memory for h

  for (int p=0; p<N; p++){
    h[p] = 0;
  }

  int *s1 = new int[N];

  for (int i=0; i<N; i++){
    s1[i] = s[i];
  }

  int result, count;
  count = 0;
   
  do{
    
    for (int i=0; i<N; i++){
      s1[i] = s[i];
    }

    mul(W,s,h,N);

    for (int j=0; j<N; j++){
      if (h[j] !=0){
        s[j] = sign(h[j]);
      }
      if (h[j]==0) {
        s[j] = s1[j];
      }
    }

    result = check(s, s1, N);
    count++;

    cout << endl;

    for (int i=0; i<N; i++){
      if (s[i] == -1)
        cout << "0" << " ";
      else
        cout << s[i] << " ";
      if (((i+1)%col) == 0 )
        cout << endl;
    }
    cout << endl;

  } while ((count < 100) && (result != 1));

  cout << "\n Number of iterations " << count << endl;

  E = energy(W,s,N);
  cout << " energy of end configuration : " << E << endl;
 
  delete[] x0;
  delete[] x1;
  delete[] x2;
  delete[] x3;
  delete[] x4;
  delete[] x5;
  delete[] x6;
  delete[] x7;
  delete[] x8;
  delete[] x9;
  delete[] x10;
  delete[] x11;
  delete[] x12;
  delete[] x13;
  delete[] x14;
  delete[] x15;
  delete[] x16;
  delete[] x17;
  delete[] x18;
  delete[] x19;
  delete[] x20;
  delete[] x21;
  delete[] x22;
  delete[] x23;
  delete[] s;
  delete[] s1;
  delete[] h;

  for (int i=0; i<N; i++) {
    delete[] W[i];
  }
  delete[] W;
}