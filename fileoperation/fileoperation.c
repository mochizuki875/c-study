#include<stdio.h>

int main(void){
    char *out_file = "output.txt";
    FILE *fp;
    int return_code=0;

    // Open file
    fp = fopen(out_file, "w");
    if(fp != NULL){
        printf("Successfully open file %s\n", out_file);

        // Write to file
        if(fprintf(fp, "Hello World!\n") > 0){
            printf("Successfully write to file %s\n", out_file);
        }
        else
        {
            printf("Failed to write to file %s\n", out_file);
            return_code = 1;
        }

        // Flush file
        // バッファのデータをファイルに出力
        // 通常は自動で行われるが、ここでは明示的に実行
        if(fflush(fp) == 0){
            printf("Successfully flush file %s\n", out_file);
        }
        else
        {
            printf("Failed to flush file %s\n", out_file);
            return_code = 1;
        }

        // Close file
        if(fclose(fp) == 0){
            printf("Successfully close file %s\n", out_file);
        }
        else 
        {
            printf("Failed to close file %s\n", out_file);
            return_code = 1;
        }
    }
    else
    {
        printf("Failed to open file %s\n", out_file);
        return_code = 1;
    }

    return return_code;
}