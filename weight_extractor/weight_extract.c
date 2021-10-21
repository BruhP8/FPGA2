#include<stdio.h>

float 
	Layer1_Weights_CPU[(5*5+1)*6],
	Layer2_Weights_CPU[(5*5+1)*6*50], 
	Layer3_Weights_CPU[(5*5*50+1)*100], 
	Layer4_Weights_CPU[(100+1)*10];

void InitHostMem()
{
	// initial layer 1 weight
	FILE * pFile1 = fopen ("../lw1.wei","rb");
	if (pFile1 != NULL)
	{
	    int i;
	    for(i=0;i<156;++i)
		fread(&(Layer1_Weights_CPU[i]),sizeof(float),1,pFile1);
		fclose (pFile1);
	}

	// initial layer 2 weight
	FILE * pFile2 = fopen ("../lw2.wei","rb");
	if (pFile2 != NULL)
	{
		fread(Layer2_Weights_CPU,sizeof(float),7800,pFile2);
		fclose (pFile2);
	}
	// initial layer 3 weight
	FILE * pFile3 = fopen ("../lw3.wei","rb");
	if (pFile3 != NULL)
	{
		fread(Layer3_Weights_CPU,sizeof(float),125100,pFile3);
		fclose (pFile3);
	}
	// initial layer 4 weight
	FILE * pFile4 = fopen ("../lw4.wei","rb");
	if (pFile4 != NULL)
	{
		fread(Layer4_Weights_CPU,sizeof(float),1010,pFile4);
		fclose (pFile4);
	}
}

int writeWeight(){
    // TODO : create .c and .h files containing data
    // TODO : fill them up with each array
    FILE * f;
    // open or create header file
    f = fopen("../wei.h", "w+");

    fprintf(f, "#ifndef WEI_H\n#define WEI_H\nextern float Layer1_Weights_CPU[(5*5+1)*6],\nLayer2_Weights_CPU[(5*5+1)*6*50],\nLayer3_Weights_CPU[(5*5*50+1)*100],\nLayer4_Weights_CPU[(100+1)*10];\n#endif");
    fclose(f);

    f = fopen("../wei.c", "w+");
    fprintf(f, "#include\"wei.h\"\n");

    // layer 1 loop
    fprintf(f,"float Layer1_Weights_CPU[(5*5+1)*6] = {" );

    for(int i = 0; i < (5 * 5 + 1 ) *6 ; i++){
        fprintf(f, "%f", Layer1_Weights_CPU[i]);
        if(i < (5 * 5 +1) *6)
            fprintf(f, ", ");
    }
    fprintf(f, "};\nfloat Layer2_Weights_CPU[(5*5+1)*6*50] = {");

    // layer 2 loop 
    for(int i = 0; i < (5*5+1)*6*50 ; i++){
        fprintf(f, "%f", Layer2_Weights_CPU[i]);
        if(i < (5*5+1)*6*50)
            fprintf(f, ", ");
    }
    fprintf(f, "};\nfloat Layer3_Weights_CPU[(5*5*50+1)*100]= {");

    // layer 3 loop
    for(int i = 0; i < (5*5*50+1)*100 ; i++){
        fprintf(f, "%f", Layer3_Weights_CPU[i]);
        if(i < (5*5*50+1)*100)
            fprintf(f, ", ");
    }
    fprintf(f, "};\nfloat Layer4_Weights_CPU[(100+1)*10] = {");

    // layer 4 loop 
    for(int i = 0; i < (100+1)*10 ; i++){
        fprintf(f, "%f", Layer4_Weights_CPU[i]);
        if(i < (100+1)*10)
            fprintf(f, ", ");
    }
    fprintf(f, "};");

    fclose(f);
    return 0;
}

int main(int argc, char const *argv[])
{
    // load files
    InitHostMem();
    // write weights to header file 
    writeWeight();
    return 0;
}
