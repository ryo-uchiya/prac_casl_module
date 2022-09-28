//txtファイル保存関数
void txt_store(char *txt_list){
    FILE *txtfile;
    txtfile = fopen("sample.txt","w");
    if(txtfile==NULL){
    	printf("Can't write!");
    }
    //txtファイルに書き込み
    fprintf(txtfile, "%s", txt_list);
    fclose(txtfile);

    //txt_listをcmdに表示
    printf("%s",txt_list);
}
