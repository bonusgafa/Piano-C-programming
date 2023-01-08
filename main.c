#include <stdio.h>
#include <windows.h>

int main(){
    printf("Notalari kullanmak icin:\n z:do\n x:re\n c:mi\n v:fa\n b:sol\n n:la\n m:si\n o:do\n");
    //Notalarin hangi tuslara karsilik geldigini belirttim

    while(1){ // while ile kodlarimi donguye soktum
        int tus=getch(); //getch komutu ile klavyeden atadigim tuslarin karsilik gelmesini sagladim
        if(tus==122){
            printf("k_do\n");
            Beep(262, 300);
        }
        else if(tus==120){//klavyedeki tus atamasini yaptim
            printf("re\n");//Hangi notanin girildigini kullaniciya gösterdim
            Beep(294, 300);
        }
        else if(tus==99){
            printf("mi\n");
            Beep(330, 300);
            // ilk deger frekans ikinci deger suresi. Bu komut ile notanin frekansi sayesinde notanin daha belirgin olmasini sagladim
        }
        else if(tus==118){
            printf("fa\n");
            Beep(349, 300);
        }
        else if(tus==98){
            printf("sol\n");
            Beep(392, 300);
        }
        else if(tus==110){
            printf("la\n");
            Beep(440, 300);
        }
        else if(tus==109){
            printf("si\n");
            Beep(494, 300);

        }
         else if(tus==111){
            printf("do\n");
            Beep(523, 300);
        }
    }
    return 0;
}
