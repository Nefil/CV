#include <iostream>
#include "figury.h"

int main(){

kolo kolo1(1);
kwadrat k1(2);
walec w1(2, 4);
szescian s1(6);

figury *wsk;

wsk = &kolo1;
wsk->obliczpole();

wsk = &k1;
wsk->obliczpole();

wsk = &w1;
wsk->obliczpole();

wsk = &s1;
wsk->obliczpole();

return 0;

}
