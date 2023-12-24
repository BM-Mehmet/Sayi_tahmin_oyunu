/*
Bu uygulamada basit bir şekilde 0 ile 100 arasında random 6 tane sayı üretilip,
kullanıcıdan bu sayıları tahmin etmesi beklenmektedir.
Doğru tahmin edilen sayılar ve toplam kaç adet sayının doğru tahmin edildiği ekrana basılacaktır.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    short dizi[6]; // üretilen sayılar bu dizide tutulur 
    short tahmin[6]; // tahmin medilen diziler burada tutullur.
    short sayac = 0; // kaç adet tahminin tuttuğu sayılması için oluşturulan değişken
    short say = 1; // kaçıncı sayıyı girildiğini saymak için oluşturulan değişken
    for (short i = 0; i < 6; i++) 
    {
        srand(time NULL); // kod her çalıştığında zamana bağlı olarak farklı sayılar üretmesi sağlanır
        dizi[i] = rand() % 100; // random sayılar üretilir
        printf("%d. sayiyi girin:", say);
        say++;
        scanf("%d", &tahmin[i]);
    }
    for (short j = 0; j < 6; j++)
    {
        for (short k = 0; k < 6; k++)
        {
            if (dizi[j] == tahmin[k]) // dizinin her elemanı tahminin her elemanıyla eşleşme kontrolü yapılır
            {
                printf("%d sayisi dogru.\n", dizi[j]); // eşleşme olursa tahmini doğru olan sayı ekrna basılır.
                sayac++;
            }
        }
    }
    printf("%d tane dogru tahmin ettiniz.", sayac); //en son kaç tane sayının doğru tahmin edildiği ekrana basılır.
    return 0;
}
