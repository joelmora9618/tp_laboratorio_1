#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

void menu(float x,float y,int flag1,int flag2)
{
    printf("\n         �����������������������������������������������������������������ͻ");
		printf("\n         �                  :: C A L C U L A D O R A ::                    �");
		printf("\n         �����������������������������������������������������������������͹");
		printf("\n         �                                                                 �");
		if(flag1==0)
        {
        printf("\n                1.- 1er Operando:            5.- DIVISION                 ");
		}else
		{
        printf("\n                1.- 1er Operando:%.2f        5.- DIVISION                 ",x);
		}
		printf("\n         �                                                                 �");
		if(flag2==0)
        {
        printf("\n                2.- 2do Operando:            6.- MULTIPLICACION           ");
		}else
		{
        printf("\n                2.- 2do Operando:%.2f        6.- MULTIPLICACION           ",y);
		}
		printf("\n         �                                                                 �");
		printf("\n                3.- SUMA                     7.- FACTORIAL                ");
		printf("\n         �                                                                 �");
		printf("\n                4.- RESTA                    8.- Todas las Operaciones     ");
		printf("\n         �                                                                 �");
		printf("\n                                 9.- Salir                                ");
		printf("\n         �                                                                 �");
		printf("\n         �����������������������������������������������������������������ͼ");
}

#endif // MENU_H_INCLUDED
