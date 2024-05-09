#include <stdio.h>
#include <string.h>

typedef struct Mahasiswa {
    char nrp[14];
    char nama[50];
    int kelas;
} Mahasiswa;

void swap(Mahasiswa *a, Mahasiswa *b) {
    Mahasiswa temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSortNRP(Mahasiswa arr[], int n) {
    for (int i = 1; i < n; i++) {
        Mahasiswa key = arr[i];
        int j = i - 1;

        while (j >= 0 && strcmp(arr[j].nrp, key.nrp) > 0) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void selectionSortNRP(Mahasiswa arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[j].nrp, arr[minIndex].nrp) < 0) {
                minIndex = j;
            }
        }

        swap(&arr[i], &arr[minIndex]);
    }
}

int soal5() {
    Mahasiswa arr[100];

    int n;
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Masukkan NRP mahasiswa ke-%d: ", i + 1);
        scanf("%s", arr[i].nrp);

        printf("Masukkan nama mahasiswa ke-%d: ", i + 1);
        scanf("%s", arr[i].nama);

        printf("Masukkan kelas mahasiswa ke-%d: ", i + 1);
        scanf("%d", &arr[i].kelas);
    }

    printf("\nData Mahasiswa sebelum diurutkan:\n");
    for (int i = 0; i < n; i++) {
        printf("NRP: %s, Nama: %s, Kelas: %d\n", arr[i].nrp, arr[i].nama, arr[i].kelas);
    }

    insertionSortNRP(arr, n);

    printf("\nData Mahasiswa setelah diurutkan dengan insertion sort berdasarkan NRP:\n");
    for (int i = 0; i < n; i++) {
        printf("NRP: %s, Nama: %s, Kelas: %d\n", arr[i].nrp, arr[i].nama, arr[i].kelas);
    }

    selectionSortNRP(arr, n);

    printf("\nData Mahasiswa setelah diurutkan dengan selection sort berdasarkan NRP:\n");
    for (int i = 0; i < n; i++) {
        printf("NRP: %s, Nama: %s, Kelas: %d\n", arr[i].nrp, arr[i].nama, arr[i].kelas);
    }

    return 0;
}
