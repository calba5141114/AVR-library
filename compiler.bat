set "name=main"
avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o main.o main.c
avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o gpio.o gpio.c
avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o interrupts.o interrupts.c
avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o timer.o timer.c
avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o usart.o usart.c
avr-gcc -mmcu=atmega328p main.o gpio.o interrupts.o timer.o usart.o -o %name%
avr-objcopy -O ihex -R .eeprom %name% %name%.hex
avrdude -v -c arduino -p atmega328p -P COM3 -b 115200 -U flash:w:%name%.hex
pause