#include <iostream>

//forrás: bhax/thematic_tutorials/bhax_textbook_IgyNeveldaProgramozod/Chomsky/fptr2.c
typedef int (*F) (int, int);
//forrás: bhax/thematic_tutorials/bhax_textbook_IgyNeveldaProgramozod/Chomsky/fptr2.c
typedef int (*(*G) (int)) (int, int);

int* ep(int& a){
  std::cout << "Egészre mutató mutatót visszaadó függvény (ep): ";
  return &a;
}

//forrás: bhax/thematic_tutorials/bhax_textbook_IgyNeveldaProgramozod/Chomsky/fptr2.c
int sum(int a, int b) {
  return a + b;
}

//forrás: bhax/thematic_tutorials/bhax_textbook_IgyNeveldaProgramozod/Chomsky/fptr2.c
int mul(int a, int b) {
  return a * b;
}

//forrás: bhax/thematic_tutorials/bhax_textbook_IgyNeveldaProgramozod/Chomsky/fptr2.c
F sumormul (int c) {
  if (c)
    return mul;
  else
    return sum;
}

int main() {
  int a = 20;
  std::cout << "Egész (a): " << a << std::endl;
  std::cout << std::endl;


  int *b = &a;
  std::cout << "Egészre mutató mutató (b): " << b << std::endl;
  std::cout << std::endl;


  int &ar = a;
  std::cout << "Egész referenciája (ar): " << ar << std::endl;
  std::cout << std::endl;

  int c[5] = {1, 2, 3, 4, 5};
  std::cout << "Egészek tömbje (c): " << std::endl;
  for (int i = 0; i < 5; i++) {
    std::cout << "     " << c[i] << std::endl;
  }
  std::cout << std::endl;


  int (&cref)[5] = c;
  std::cout << "Egészek tömbjének referenciája (cref): " << cref << std::endl;
  std::cout << std::endl;


  int * d[5] = {&c[0], &c[1], &c[2], &c[3], &c[4]};
  std::cout << "Egészre mutató mutatók tömbje (d): " << std::endl;
  for (int i = 0; i < 5; i++) {
    std::cout << "     " << d[i] << std::endl;
  }
  std::cout << std::endl;


  std::cout << ep(a) << std::endl;
  std::cout << std::endl;


  int* (*epfp)(int&) = ep;
  std::cout << "Egészre mutató mutatót visszaadó függvényre mutató mutató (epfp): " << &epfp << std::endl;
  std::cout << std::endl;


  //forrás: bhax/thematic_tutorials/bhax_textbook_IgyNeveldaProgramozod/Chomsky/fptr2.c
  F f = sum;
  std::cout << "Egészet visszaadó és két egészet kapó függvényre mutató mutatót visszaadó, egészet kapó függvény (f): " << f (2, 3) << std::endl;
  std::cout << std::endl;
  G g = sumormul;
  f = *g (42);
  std::cout << "Függvénymutató egy egészet visszaadó és két egészet kapó függvényre mutató mutatót visszaadó, egészet kapó függvényre &(f*g): " << f (2, 3) << std::endl;


  return 0;
}
