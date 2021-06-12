/* Enter your solutions in this file */
#include <stdio.h>

#include <stdio.h>

int max(int nos[], int count) {
  int m = nos[0];
  for (int i=1; i<count; i++) {
    if (nos[i] > m) {
      m = nos[i];
    }
  }
  return m;
}

int min(int nos[], int count) {
  int m = nos[0];
  for (int i=1; i<count; i++) {
    if (nos[i] < m) {
      m = nos[i];
    }
  }
  return m;
}

int average(int nos[], int count) {
  float sum = 0;
  for (int i=0; i<count; i++) {
    sum += nos[i];
  }
  return sum/count;
}



int mode(int nos[], int count) {
  int m = max(nos, count)+1;
  int counts[m];
  for (int i=0; i<m; i++) {
    counts[i] = 0;
  }
  
  for (int i=0; i<count; i++) {
    counts[nos[i]]++;
  }

  int val = 0;
  int val_count = 0;
  for(int i=0; i<m; i++) {
    if (counts[i] > val_count) {
      val_count = counts[i];
      val = i;
    }
  }

  return val;
}

int factors(int num, int ret[]) {
  int idx=0;
  int factor=2;
  while (num != 1) {
    if ((num % factor) == 0) {
      ret[idx]=factor;
      idx++;
      num = num/factor;
    } else {
      factor++;
    }
  }
  return idx;
}
