//行数を読む関数
void rows_count(FILE *fp, char *filename, char *mode){
    int count;
    char len_str[SIZE];
    while(fgets(len_str,SIZE,fp) != NULL){
        count++;
    }
    printf("ok %d", count);
}
