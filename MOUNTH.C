#include<stdio.h>
#include<conio.h>


main()
{
	 int a;
	 int c;
	 clrscr();
	 printf("<number of mounth>\n");
	 printf("press number ");
	 scanf("%i",&c);
	 switch(c)
	 {
	     case 1 :
		    printf("1st is january");
		    break;
	     case 2 :
		    printf("2nd is february");
		    break;
	     case 3 :
		    printf("3rd is march");
	     case 4 :
		    printf("4th is april");
		    break;
	     case 5 :
		    printf("5th is may");
		    break;
	    case 6 :
		    printf("6th is june");
		    break;
	      case 7 :
		    printf("7th is july");
		    break;
	      case 8 :
		    printf("8th is august");
		    break;
	       case 9 :
		    printf("9th is september");
		    break;
		 case 10 :
		    printf("10this october");
		    break;
		   case 11:
		    printf("11this november");
		    break;
		 case 12:
		    printf("12this december");
		    break;
		 default :
		    printf("plz Enter proper number");

		  }
		  getch();
		  }