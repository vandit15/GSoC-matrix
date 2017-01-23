#include <Rcpp.h>
using namespace Rcpp;


// [[Rcpp::export]]
void print_matrix_cpp(S4 object) {
  
  CharacterVector type= object.slot("class");
  NumericVector dim = object.slot("Dim");
  List factors = object.slot("factors");
  NumericVector x = object.slot("x");
  NumericVector i = object.slot("i");
  NumericVector p = object.slot("p");
  Rcout << "Type:   "<< type << "\n";
  Rcout << "Dim:   "<< dim << "\n";
  Rcout << "length of i:   " << i.size()<<"\n";
  Rcout << "value of i:   " << i<<"\n";
  Rcout << "length of p:   " << p.size()<<"\n";
  Rcout << "value of p:   " << p<<"\n";
  Rcout << "length of x   " << x.size()<<"\n";
  Rcout << "value of x   " << x<<"\n";
  
}



