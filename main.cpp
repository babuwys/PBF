#include <iostream>
#include <DSP_lib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//generator OFDM
//liczba podnoœnych
	int num_kan=4;
//d³ugoœæ sygna³u 
int dl_syg=100;
//generator sygna³u binarngo	
int DSPu_binrand(dl_syg);
//podzia³ sygna³u binarnego na podnoœne
	int DSPu_Selector(int num_kan, int IndexOffset=1);
	//tu trzeba chyba jeszcze zrealizowaæ prefiks cykliczny, czyli z ka¿dej podnoœnej wydzieliæ pocz¹tek sygna³u i dokleiæ go dodatkowo na koniec.

//modulacja PSK
for (int i=1; i<=num_kan; i++)
{
	//tu chyba trzeba dopisaæ pêtle tego jak to wszystko dzia³¹ i przydzia³u do 4 podpasm
void DSPu_PSKdecoder(DSPe_PSK_type type=DSP_BPSK);	
	
}
//Odwrotne FFT	
int DSPu_IFFT(int dl_syg);
//sumowanie sygna³u
int DSPu_Multiplexer (DSP_clock_ptr ParentClock, int inputs =2);

////////////////////////////////////////////////////////////
// te funkcje trzeba ze sob¹ po³¹czyæ.
	
	return 0;
}
