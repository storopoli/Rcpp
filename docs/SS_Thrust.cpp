#include <Rcpp.h>
#include <thrust/device_vector.h>
#include <thrust/functional.h>
#include <thrust/transform_reduce.h>

// [[Rcpp::plugins(thrust)]]

// [[Rcpp::export]]
double thrust_sum_of_squares(Rcpp::NumericVector& v){
  
  // cria um device_vector na GPU copiando todos os elementos do NumericVector v
  thrust::device_vector<double> dv(v.cbegin(), v.cend());
  
  double sum_of_squares = thrust::transform_reduce(dv.cbegin(),
                                                   dv.cend(),
                                                   thrust::square<double>(),
                                                   0L,
                                                   thrust::plus<double>());
  return sum_of_squares;
}
