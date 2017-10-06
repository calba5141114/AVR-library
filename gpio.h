#ifndef GPIO_H
#define GPIO_H
void setDDRB(int newDDRB);
void setDDRC(int newDDRC);
void setDDRD(int newDDRD);
int senseB(int pin);
int senseC(int pin);
int senseD(int pin);
void setB(int pin, int value);
void setC(int pin, int value);
void setD(int pin, int value);
#endif