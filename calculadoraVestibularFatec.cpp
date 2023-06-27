#include <iostream>
using namespace std;

int main() {
  int acertosPeso1, acertosPeso2;

  system("clear");
  cout << "----CALCULADORA DE NOTA FATEC----" << endl;
  cout << "O vestibula da Fatec é composto por 2 etapas: \n- Prova Objetiva "
          "(múltipla escolha)\n- Redação\nAlém disso, o candidato pode optar "
          "pelo sistema de \ncotas racial e/ou de escola pública"
       << endl;

  cout << "A Prova Objetiva (múltipla escolha) do vestibular da \nFatec possui "
          "questões 54 questões ao todo. \nDestas, 10 questões tem peso 2 e 44 "
          "questões peso 1"
       << endl;
  cout << endl;
  cout << "OBS.: Para o curso de ADS, as questões de \nMatemática e Raciocínio "
          "Lógico são as de \npeso 2, as demais tem peso 1."
       << endl;
  cout << endl;

  if (true) {
    string inserir;
    cout << "Insira 0 para continuar\n>";
    cin >> inserir;
  }

  system("clear");
  cout << "Quantas questões de peso 2 você acertou? (10 questões)\n>";
  cin >> acertosPeso2;

  system("clear");
  cout << "Quantas questões de peso 1 você acertou? (44 questões)\n>";
  cin >> acertosPeso1;

  double redacao;
  system("clear");
  cout << "Insira sua nota da redação (ou 0 se não souber):\n>";
  cin >> redacao;

  int opcao1;
  double acrescimo1 = 0.0;
  system("clear");
  cout << "Você optou por cota racial?\n\n1 - Sim\n2 - Não\n>";
  ;
  cin >> opcao1;

  if (opcao1 == 1) {
    acrescimo1 = 3.0 / 100.0;
  }

  int opcao2;
  double acrescimo2 = 0.0;
  system("clear");
  cout << "Você optou por cota de escola pública?\n\n1 - Sim\n2 - Não\n>";
  cin >> opcao2;
  if (opcao2 == 1) {
    acrescimo2 = 10.0 / 100.0;
  }

  double notaObjetiva;

  notaObjetiva = (100.0 / 64.0) * (2.0 * acertosPeso2 + acertosPeso1);

  double notaFinal, notaFinalMin, notaFinalMax;

  system("clear");
  if (redacao == 0) {
    notaFinalMin = (8.0 * notaObjetiva + 2 * 0.0) / 10.0;
    notaFinalMax = (8.0 * notaObjetiva + 2 * 100.0) / 10.0;

    notaFinalMin *= (1.0 + acrescimo1 + acrescimo2);
    notaFinalMax *= (1.0 + acrescimo1 + acrescimo2);

    cout << "Sua nota final está entre " << notaFinalMin << "pts e "
         << notaFinalMax << "pts" << endl;
  } else {
    notaFinal = (8.0 * notaObjetiva + 2.0 * redacao) / 10.0;

    notaFinalMin *= (1.0 + acrescimo1 + acrescimo2);
    notaFinalMax *= (1.0 + acrescimo1 + acrescimo2);

    cout << "Sua nota final é " << notaFinal << "pts" << endl;
  }

  cout << endl;
  cout << "OBS:. A nota máxima (supondo que acertou todas\nas questões e tirou "
          "nota "
          "máxima na redação) é 100pts";
}
