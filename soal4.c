//#include <stdio.h>
//#include <stdlib.h>
//#include<time.h>
//#define MAX 20
//
//void selectionSort(int arr[]) {
//    int i, j, temp, min, min_id;
//    i = 0;
//    while(i < MAX - 1){
//        min_id = i;
//        min = arr[i];
//        for(j = i + 1; j < MAX; j++)
//            if(arr[j] < min){
//                min = arr[j];
//                min_id = j;
//            }
//        temp = arr[min_id];
//        arr[min_id] = arr[i];
//        arr[i] = temp;
//        i++;
//    }
//}
//
//int soal4() {
//    int data_awal[MAX], data_urut[MAX];
//    int i;
//    long k1, k2;
//
//    printf("Sebelum pengurutan: \n");
//    for(i = 0;i < MAX; i++){
//        srand(time(NULL) * (i + 1));
//        data_awal[i] = rand() % 100 + 1;
//        printf("%d ", data_awal[i]);
//    }
//    for(i = 0; i < MAX; i++)
//        data_urut[i] = data_awal[i];
//
//    time(&k1);
//    selectionSort(data_urut);
//    printf("\nPengurutan secara descending: \n");
//    for(i = MAX - 1; i >= 0; i--)
//        printf("%d ", data_urut[i]);
//    printf("\nWaktu = %ld\n", k2 - k1);
//}