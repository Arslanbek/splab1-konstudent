//Fullname: Vasya Pupkin
//Group: 3EN04X

// gcc sincos.c -o sincos -lm
// ./sincos 1.57
// ./sincos -s 1.57
// ./sincos -c 1.57
// ./sincos -s -c 1.57
// ./sincos -sc 1.57
// ./sincos -cs 1.57

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main (int argc, char **argv)
{
  int cflag = 0;
  int sflag = 0;
  int index;
  int ch;
  opterr = 0;
  while ((ch = getopt (argc, argv, "sc")) != -1)
    switch (ch)
      {
      case 'c':
        cflag = 1;
        break;
      case 's':
        sflag = 1;
        break;
      case '?':
        fprintf(stderr,"error\n");
        return 1;
      default:
        abort();
      }
  printf ("cflag = %d, sflag = %d\n", cflag, sflag);

  for (index = optind; index < argc; index++){
	double angle = atof(argv[index]);
	if (!sflag && !cflag){
		printf("%f\n",sin(angle));		
		printf("%f\n",cos(angle));
	} else{
		if (sflag){
			printf("%f\n",sin(angle));
		}
		if (cflag){
			printf("%f\n",cos(angle));
		}
	}
	break;
  }
  
  return 0;
}
