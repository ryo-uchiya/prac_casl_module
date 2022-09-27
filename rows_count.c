void rows_count(FILE *fp, char *filename, char *mode){
    //行数を読み込む
    int count;
    char len_str[SIZE];
    while(fgets(len_str,SIZE,fp) != NULL){
        count++;
    }
    printf("ok %d", count);
}
