#include "s21_decimal.h"

int main() {
  s21_decimal x;
  s21_decimal y;
  s21_decimal res;
  s21_from_int_to_decimal(-123456, &x);
  s21_from_int_to_decimal(111111, &y);
  s21_add(x, y, &res);
  int pr;
  s21_from_decimal_to_int(res, &pr);
  printf("%d", pr);
}
