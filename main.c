#include <stdio.h>
#include "bst.h"

int main()
{
  Tree t = createTree();
  
  AVLinsert(t, 21);
  AVLinsert(t, 4);
  AVLinsert(t, 27);
  AVLinsert(t, 8);
  AVLinsert(t, 45);
  AVLinsert(t, 99);
  AVLinsert(t, 1);

  imprime(t,"oi");

  return 0;
}
