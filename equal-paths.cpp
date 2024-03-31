#ifndef RECCHECK
//if you want to add any #includes like <iostream> you must do them here (before the next endif)
#include <algorithm>

#endif

#include "equal-paths.h"
using namespace std;


// You may add any prototypes of helper functions here

int pathLen(Node * root)
{
  // if end of path, stop
  if(root == nullptr) return 0;

  int leftPathLen = pathLen(root->left);
  int rightPathLen = pathLen(root->right);

  // increment by 1 all the way up
  return max(leftPathLen, rightPathLen) + 1;
}

bool equalPaths(Node * root)
{
    // Add your code below
  if(pathLen(root->left) == pathLen(root->right))
  {
    return true;
  }
  else
  {
    return false;
  }
}



