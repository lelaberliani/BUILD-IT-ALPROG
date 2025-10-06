#include <stdio.h>

int main(){
    int n;
    int pengeluaran[1000];
    int days[1000];
    long long total_pengeluaran = 0;
    int max_pengeluaran = -1;
    int count = 0;
    double percentage = 0.0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        scanf("%d", &pengeluaran[i]);
    }
    
    for (int i = 0; i < n; i++ ){
        total_pengeluaran += pengeluaran[i];
        if (pengeluaran[i] > max_pengeluaran){
            max_pengeluaran = pengeluaran[i];
        }
    }
    
    int day_index = 0;
    for (int i = 0; i < n; i++){
        if (pengeluaran[i] == max_pengeluaran){
            count++;
            days[day_index] = i + 1;
            day_index++;
        } 
    }
    if (total_pengeluaran > 0){
        percentage = ((double)max_pengeluaran * count) / total_pengeluaran * 100.0;
    }
    
    printf("Max : %d\n", max_pengeluaran);
    printf("Count : %d\n", count);
    printf("days : ");
    for (int i = 0; i < count; i++){
        printf("%d ", days[i]);
    }
    printf("\n");
    
    printf("Percentage : %.3f%%\n", percentage);
    
    return 0;
}