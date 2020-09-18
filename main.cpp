#include <iostream>
#include <string>
#include <string.h>



// Feito por Dev_John#4482

using namespace std;

void calculadora(); //criei a função da minha calc
void reinicio(); // pra reiniciar a calculadora
void erroinicio(); // se tiver erro no inicio

//minha classe principal

char inicio;

int main() {
  
  cout << "Bem vindo Usuário!" << endl;
  cout << "Deseja iniciar a calculadora? (y/n)" << endl;
  cin >> inicio;
  if(inicio == 'y') {
    system("clear||cls");
    cout << "Calculadora sendo iniciada!" << endl;
    system("clear||cls");
    calculadora();
  } else if(inicio == 'n') {
    return 0;
  } else {
    erroinicio();
  }
}

void calculadora() {
  int a; //minhas variaveis
  string b;
  int c;
  cout << "Digite o primeiro numero: " << endl;
  cin >> a;

  if(a != 0) {

  cout << "Digite o operador: " << endl;
  cin >> b;
  
  if(b == "+") {
  cout << "Digite o segundo numero: " << endl;
  cin >> c;
  if(c != 0) { 
   cout << "A soma resulta em: " << endl;
    cout << a + c << endl;
  } else {
    system("clear||cls");
  cout << "Houve um erro!" << endl;
  cout << "Por favor, digite o segundo numero: " << endl;
  cin >> c;
  cout << a + c << endl;
  }
  } else if(b == "-") {
    cout << "Digite o segundo numero: " << endl;
  cin >> c;
  if(c != 0) {
    cout << "A some resulta em: " << endl;
    cout << a - c << endl;
  } else {
    system("clear||cls");
  cout << "Houve um erro!" << endl;
  cout << "Por favor, digite o segundo numero: " << endl;
  cin >> c;
  cout << a - c << endl;
  }
  } else if(b == "*") {
    cout << "Digite o segundo numero: " << endl;
  cin >> c;
  if(c != 0) {
    cout << "A multiplicação resulta em: " << endl;
    cout << a * c << endl;
    } else {
      system("clear||cls");
  cout << "Houve um erro!" << endl;
  cout << "Por favor, digite o segundo numero: " << endl;
  cin >> c;
  cout << a * c << endl;
    }
  } else if(b == "/") {
    cout << "Digite o segundo numero: " << endl;
  cin >> c;
  if(c != 0){
    cout << "A divisão resulta em: " << endl;
    cout << a / c << endl;
  } else {
    system("clear||cls");
  cout << "Houve um erro!" << endl;
  cout << "Por favor, digite o segundo numero: " << endl;
  cin >> c;
  cout << a / c << endl;
  }
  } else {
    system("clear||cls");
    cout << "Houve um erro!" << endl;
    calculadora();
  }
  } else {
    system("clear||cls");
    cout << "Houve um erro!" << endl;
    calculadora();
  }
}

void erroinicio() {
  cout << "Houve um erro!" << endl;
    cout << "Tenha certeza que escolheu y ou n" << endl;
    cout << "Deseja iniciar a calculadora?" << endl;
    cin >> inicio;
    if(inicio == 'y') {
    system("clear||cls");
    cout << "Calculadora sendo iniciada!" << endl;
    system("clear||cls");
    calculadora();
  } else if(inicio == 'n') {
    system("exit");
  } else {
    erroinicio();
  }
}
