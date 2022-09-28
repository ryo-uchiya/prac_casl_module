//ファイル読み込み関数
void read_file(){
    FILE *fp;

    char *filename;

    filename = "sample.cas";

    //改行文字の削除
    strtok(filename,"\n");

    //ファイルを開く
    fp = fopen(filename,"r");

    if(fp == NULL){
        printf("%s not found",filename);
        return;
    }
    
    rows_count(fp,filename,"r");

    fclose(fp);
}
