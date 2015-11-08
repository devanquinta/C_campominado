#include<stdio.h>
int main()
{
	
	
	/************************************** * 
	Trabalho 2 de Programacao de Computadores I 
	- campo minado* Curso de Sistemas da informacao *
	Aluno: vander quintanilha - matricula: 0055013538* 
	Professor: Alex Salgado 
	***************************************/
	
	
	char nome [15];
	int campo [5] [5];
	int i, j;
	int lin, col;
	int sn=0;
    int score=0;
    



{
 printf("Digite o seu nome\n\n");
}
{
 scanf("%s",&nome);
}
{
 printf("\n\nOla  %s!!\n \nVamos começar.\n\n",nome);
}
	
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 4; j++)
		{
				
		campo[0][0] = 0;
		campo[0][1] = 0;
		campo[0][2] = 1;
		campo[0][3] = 1;
		campo[0][4] = 1;

		campo[1][0] = 0;
		campo[1][1] = 1;
		campo[1][2] = 0;
		campo[1][3] = 0;
		campo[1][4] = 1;

		campo[2][0] = 1;
		campo[2][1] = 0;
		campo[2][2] = 1;
		campo[2][3] = 0;
		campo[2][4] = 0;

		campo[3][0] = 1;
		campo[3][1] = 1;
		campo[3][2] = 0;
		campo[3][3] = 1;
		campo[3][4] = 0;

		campo[4][0] = 1;
		campo[4][1] = 0;
		campo[4][2] = 1;
		campo[4][3] = 0;
		campo[4][4] = 0;


	}// for
		}// for
		
 while  ((sn<=2) )
 {
	
	if ( (sn>1) && (sn<3))
    {
    	
     printf("\nVocê saiu do jogo.\n\n");
	
  	 printf("Até logo.");

	 break;	

     }//if	
	
     {	
      printf ("\nEntre com as cordenadas:\n\n\n");
     }
		
     lin=0; col=0;

     while (( lin>5) || (lin<1))
     {	
     
      {
      printf("\nDigite a linha que deseja.\n");
      }
      {
      printf("Entre ( 1 ) e ( 5 ):\n\n");
      }
      {
      scanf("%d", & lin);
      }
      

    if (( lin>5) || (lin<1))

    {
	printf("\nErro, digite novamente\n");
    }//if

																		
}//while


   while (( col>5) || (col<1))
   {
   printf("\nDigite a coluna que deseja.\n");
						
   printf("Entre ( 1 ) e ( 5 ):\n\n");

   scanf("%d", &col);


   if (( col>5) || (col<1))
   {
	printf("\nErro, digite novamente\n");
   }//if


}//while


   {
   printf("\0%d",campo[lin-1] [col-1] );
   }

   if (campo[lin-1] [col-1]<1)
   {
	printf("\n\nBomBaa!!\n\n");
   }	
   else 
   {
   	
	printf("\n\nVOCÊ ACERTOU!!!\n\n");
	
   }//if else

   if (campo[lin-1] [col-1] >0)
   {
	score++;
	
	printf("\n\nscore:%d\n\n",score);
   
   }//if
	
   {	
    printf (" \nDeseja continuar?\n\n");
   }
   {
    printf(" Digite( 1 ) para sim e ( 2 ) para não.\n\n");
   }
   {
    scanf("%d",&sn);
   }
   
   if ( (sn>1) && (sn<3))
   {
	
	printf( "\nVocê saiu do jogo.\n\n");
	
	printf("Até logo.");

	break;	

    }//if

    while (( sn>2) || ( sn<1))
    {

	sn=0;
	
	printf ("\nErro\n\n");
	
	printf (" \nDeseja continuar?\n\n");

    printf(" digite( 1 ) para sim e ( 2 ) para não.");

    scanf("%d",&sn);

    }//while
	


  }// while

   return 0;		

}	//fechamento