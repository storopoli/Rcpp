#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
void teste_print(){
  Rcout << "Imprima algo na tela\n";
  Rcerr << "Imprima um erro na tela\n";
}

/*** R
teste_print()
*/
