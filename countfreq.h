#ifndef COUNTFREQ_H_INCLUDED
#define COUNTFREQ_H_INCLUDED

extern int chars[256];

void initializeChars();
void inputFile(FILE *fp);
void printFreq();

#endif // COUNTFREQ_H_INCLUDED
