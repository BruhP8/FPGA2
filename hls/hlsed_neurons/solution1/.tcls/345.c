#include "345.h"



void nerons (float Layer2_Neurons_CPU[6*13*13], double Layer5_Neurons_CPU[10]){
  
  float Layer3_Neurons_CPU[50*5*5];
  float Layer4_Neurons_CPU[100];

  calculateLayer3(Layer2_Neurons_CPU, Layer2_Weights_CPU, Layer3_Neurons_CPU);
  calculateLayer4(Layer3_Neurons_CPU, Layer3_Weights_CPU, Layer4_Neurons_CPU);
  calculateLayer5(Layer4_Neurons_CPU, Layer4_Weights_CPU, Layer5_Neurons_CPU);

}


void calculateLayer3(float* Layer2_Neurons_CPU, float* Layer2_Weights_CPU, float* Layer3_Neurons_CPU){
	float somme;
	int i,j,k,m,n;
	for( i=0;i<50;i++)
		for(j=0;j<5;j++)
			for(k=0;k<5;k++){
				somme = Layer2_Weights_CPU[26*6*i];

				for( m=0;m<5;m++)
					for( n=0;n<5;n++){

						somme += Layer2_Weights_CPU[26*6*i+1+6*(n+5*m)	] * Layer2_Neurons_CPU[13*13*0+13*(2*j+m)+(2*k+n)];
						somme += Layer2_Weights_CPU[26*6*i+1+6*(n+5*m)+1] * Layer2_Neurons_CPU[13*13*1+13*(2*j+m)+(2*k+n)];
						somme += Layer2_Weights_CPU[26*6*i+1+6*(n+5*m)+2] * Layer2_Neurons_CPU[13*13*2+13*(2*j+m)+(2*k+n)];
						somme += Layer2_Weights_CPU[26*6*i+1+6*(n+5*m)+3] * Layer2_Neurons_CPU[13*13*3+13*(2*j+m)+(2*k+n)];
						somme += Layer2_Weights_CPU[26*6*i+1+6*(n+5*m)+4] * Layer2_Neurons_CPU[13*13*4+13*(2*j+m)+(2*k+n)];
						somme += Layer2_Weights_CPU[26*6*i+1+6*(n+5*m)+5] * Layer2_Neurons_CPU[13*13*5+13*(2*j+m)+(2*k+n)];
					}
				Layer3_Neurons_CPU[5*5*i+5*j+k] = (float) SIGMOID(somme);
			}
}

void calculateLayer4(float* Layer3_Neurons_CPU, float* Layer3_Weights_CPU, float* Layer4_Neurons_CPU){
	float somme;
	int i, j, k, m;
	for( i=0;i<100;i++){
		somme = Layer3_Weights_CPU[i*(1+50*25)];
		for( j=0;j<50;j++)
			for( k=0;k<5;k++)
				for ( m=0;m<5;m++)
					#pragma HLS loop_flatten  // TODO useless
					somme += Layer3_Weights_CPU[i*(1+50*25)+1 + m + k*5 + j*25] * Layer3_Neurons_CPU[m+5*k+25*j];

		Layer4_Neurons_CPU[i] = (float) SIGMOID(somme);
	}

}

void calculateLayer5(float* Layer4_Neurons_CPU, float* Layer4_Weights_CPU, double* Layer5_Neurons_CPU){
	float somme;
	int i, j;
	for( i=0;i<10;i++){
		somme = Layer4_Weights_CPU[101*i];
		for( j=0;j<100;j++)
			somme += Layer4_Weights_CPU[1+101*i+j] * Layer4_Neurons_CPU[j];
		Layer5_Neurons_CPU[i] = SIGMOID(somme);
	}
}
