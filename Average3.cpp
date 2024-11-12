#include <iostream>
#include<iomanip>

using namespace std;
 
int main() {
 
  float N1,N2,N3,N4;
   
   cin >> N1 >> N2 >> N3 >> N4;

   float sum = ((N1*2) + (N2*3)+ (N3*4) + (N4*1));
   float avg = sum/(2+3+4+1);
   cout << fixed << setprecision(1) << "Media: " << avg << endl;
  
  if(avg >= 7.0){
    cout << "Aluno aprovado." << endl;
  } else if(avg < 5.0){
    cout << "Aluno reprovado." << endl;
  } 
  
  else if(avg >= 5.0 && avg <= 6.9){
    cout << "Aluno em exame." << endl;
  
  float N5;
  cin >> N5;

  cout << "Nota do exame: " << N5 << endl;
  
  float sum2 = avg + N5;
  float avg2 = sum2 / 2;

  if(avg2>=5.0 )
  cout << "Aluno aprovado." << endl;
 
   if(avg2<=4.9){
    cout << "Aluno reprovado: " << endl;
   }
   cout << fixed << setprecision(1) << "Media final" << avg2 << endl;
  }
    return 0;
}