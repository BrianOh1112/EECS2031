#include <stdio.h> // define EOF

int main(){
  int c;
  int count = 0;
  int countA = 0;
 
  c = getchar();
  while(c != EOF) /* no end of file*/
  { 

    if(c == 'a')
    {
        countA++;
    }
    
    count++; //include spaces and '\n'

    c = getchar(); /* read next */


  }
  printf("# of chars: %d\n",count);
  printf("# of chars 'a': %d\n",countA);

}
