#include <stdio.h>
#include <stdlib.h>

void main()
{
    int jumlah,i;
    float rata;
    float total=0;

    printf("Masukkan Jumlah mahasiswa : ");
    scanf("%i",&jumlah);
    int nilai[jumlah];

    for(i=0;i<jumlah;i++)
    {
        printf("Masukkan Nilai Mahasiswa ke %d : ",i+1);
        scanf("%d",&nilai[i]);
        total=nilai[i]+total;
    }
    rata=total/jumlah;
    printf("Rata-rata : %f",rata);
}
