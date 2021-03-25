 import java.util.*;
import java.lang.*;
import java.io.*;

class Solution 
{
  int evenMultiplication (int size, int[] list) {
      int evenMulti=1;
      for (int i =0; i<size;)
      {
        if(list[i] % 2 == 0) {
          evenMulti*=list[i++];
        }
      }
    return evenMulti;
  }
}
