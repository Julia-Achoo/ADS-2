// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double result = 1.0;
    for (uint16_t i = 0; i < n; i++) {
      result *= value;
    }
    return result;
}

uint64_t fact(uint16_t n) {
  uint64_t result = 1;
    for (uint16_t i = 1; i <= n; i++) {
      result *= i;
    }
    return result;
}

double calcItem(double x, uint16_t n) {
  return pown(x,n) / fact(n);
}

double expn(double x, uint16_t count) {
  double res = 1.0;
  for (uint16_t n = 1; n <= count; n++) {
    res += pown(x, n) / fact(n);
  }
  return res;
}

double sinn(double x, uint16_t count) {
  double res = 0.0;
  for (uint16_t n = 0; n <= count; n++) {
    res += ((n % 2 == 0) ? 1 : -1) * pown(x, 2 * n + 1) / fact(2 * n + 1);
  }
  return res;
}

double cosn(double x, uint16_t count) {
  double res = 0;
  for (uint16_t i = 1; i <= count; i++) {
    res += calcItem(x, (2 * i) - 2) * pown(-1, i-1);
  }
  return res;
}
