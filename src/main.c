#include <util/delay.h>
#include <avr/io.h>
#include <usart.h>
#include <display.h>

int main(){
    initUSART();
    initDisplay();

    while(1)
    {
        writeStringAndWait("easy", 10000);
    }
}