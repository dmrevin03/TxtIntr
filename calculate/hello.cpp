#include <iostream>
#include <getopt.h>

using namespace std;

int main(int argc, char *argv[])
{

	{ if (argc==1)
    {
        cout<<"Калькулятор"<< endl<< "Введите один из нижеперечисленных параметров:" << endl<< "-s — cложение всех введенных значений" << endl << "-v — вычетание первого значения из всех последующих введенных значений"<< endl << "Чтобы продолжить запустите программу еще раз с нужным параметром и введите значения через пробел"<< endl;
    }        

	int opt, i, result = 0, x, b ,t;
	while ((opt = getopt (argc, argv, "v:s:")) != -1)
        {
            switch (opt)
            {
                case 's':
        			for(i = 0; i<argc; i++)
        			{
            				cout<< i << ": "<< argv[i] << endl;
        			}			
        			for(i=2; i<argc; i++)
        			{
            			x = strtol(argv[i], NULL, 10);
            			result=result + x;
        			}
        		cout<< "Результат: "<< result<<endl;
               	break;
               	
               	case 'v':
    				for(i = 0; i<argc; i++)
   			 		{
        				cout<< i << ": "<< argv[i] << endl;
    				}	
    				b = 0;
    				for(i=2; i<argc; i++)
    				{
       					x = strtol(argv[i], NULL, 10);
          				t = strtol(argv[2], NULL, 10);
        				result=result + x;
        				b=result - t*2;
    				}
    			cout<< "Результат: "<< b <<endl;
                break;       
            }
        }
    }
}
