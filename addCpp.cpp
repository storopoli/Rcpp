#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
int addCpp(int x, int y, int z){
  int result = x + y + z;
  return result;
}


// Você pode incluir blocos de códigos de R em código C++
// (útil para testagem e desenvolvimento). O código R será
// automaticamente executado após a compilação.
//

/*** R
addCpp(11, 21, 31)
*/
