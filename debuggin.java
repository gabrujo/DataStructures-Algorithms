import jave.util.*;
import java.lang.*;
import java.io.*;

class Solution
{
  int findIndex(int size, int[] list, int key)
  {
    for (int i=0;i<size;i++){
        if (list(i) == key) 
        {
          return i;
        }
    }
    return -1;
  }
}
