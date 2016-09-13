#include <iostream>
#include <DSP_lib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//generator OFDM
//liczba podno�nych
	int num_kan=4;
//d�ugo�� sygna�u 
int dl_syg=100;
//generator sygna�u binarngo	
int DSPu_binrand(dl_syg);
//podzia� sygna�u binarnego na podno�ne
	int DSPu_Selector(int num_kan, int IndexOffset=1);
	//tu trzeba chyba jeszcze zrealizowa� prefiks cykliczny, czyli z ka�dej podno�nej wydzieli� pocz�tek sygna�u i doklei� go dodatkowo na koniec.

//modulacja PSK
for (int i=1; i<=num_kan; i++)
{
	//tu chyba trzeba dopisa� p�tle tego jak to wszystko dzia�� i przydzia�u do 4 podpasm
void DSPu_PSKdecoder(DSPe_PSK_type type=DSP_BPSK);	
	
}
//Odwrotne FFT	
int DSPu_IFFT(int dl_syg);
//sumowanie sygna�u
int DSPu_Multiplexer (DSP_clock_ptr ParentClock, int inputs =2);

////////////////////////////////////////////////////////////
// te funkcje trzeba ze sob� po��czy�.
	
	return 0;
}
