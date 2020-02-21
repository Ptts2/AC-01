#include<iostream>
#include <conio.h>

    using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_ENTER 13

int main(){
    int c = 0;
    int eleccion = 0;
    int salir = 0;
    string menu1 [4] = { "opcion1", "opcion2", "opcion3", "opcion4"};
    string menu1h [4] = { "==>", " ", " ", " " };

    do{
        system("cls");

        cout<< "\t" << menu1h [0] << "\t" << menu1 [0] << endl
            << "\t" << menu1h [1] << "\t" << menu1 [1] << endl
            << "\t" << menu1h [2] << "\t" << menu1 [2] << endl
            << "\t" << menu1h [3] << "\t" << menu1 [3] << endl;


        c = getch();
        if(c == KEY_UP ){
            menu1h [eleccion] = " ";
            eleccion--;

                if( eleccion < 0){
                eleccion = 0;
                }

            menu1h [eleccion] = "==>";

        }
        else if(c == KEY_DOWN ){
            menu1h [eleccion] = " ";
            eleccion++;

                if(eleccion > 3){
                    eleccion = 3;
                }

            menu1h [eleccion] = "==>";
        }
        else if( c == KEY_ENTER){
            salir = 1;
        }


    }while( salir == 0 );

return 0;
}
