#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

void menu(float x,float y,int flag1,int flag2)
{
    printf("\n         ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
		printf("\n         บ                  :: C A L C U L A D O R A ::                    บ");
		printf("\n         ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน");
		printf("\n         บ                                                                 บ");
		if(flag1==0)
        {
        printf("\n                1.- 1er Operando:            5.- DIVISION                 ");
		}else
		{
        printf("\n                1.- 1er Operando:%.2f        5.- DIVISION                 ",x);
		}
		printf("\n         บ                                                                 บ");
		if(flag2==0)
        {
        printf("\n                2.- 2do Operando:            6.- MULTIPLICACION           ");
		}else
		{
        printf("\n                2.- 2do Operando:%.2f        6.- MULTIPLICACION           ",y);
		}
		printf("\n         บ                                                                 บ");
		printf("\n                3.- SUMA                     7.- FACTORIAL                ");
		printf("\n         บ                                                                 บ");
		printf("\n                4.- RESTA                    8.- Todas las Operaciones     ");
		printf("\n         บ                                                                 บ");
		printf("\n                                 9.- Salir                                ");
		printf("\n         บ                                                                 บ");
		printf("\n         ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ");
}

#endif // MENU_H_INCLUDED
