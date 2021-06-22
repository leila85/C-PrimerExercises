int _;  // Error: start with `_` (May not warn by compiler)
int main() {
  //int double = 3.14;  // error: expected unqualified-id before '=' token
  int _;  // OK
  //int catch-22;  //-> error: expected unqualified-id before 'catch'
  //int 1_or_2 = 1;  // Error: start with number -> error: expected unqualified-id before numeric constant
  double Double = 3.14;  // OK
  int gaia-aurelia = 0;

  int _i2;  // OK

  return 0;
}