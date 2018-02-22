#ifndef HISCORE_H
#define HISCORE_H

void hs_open( const char *name );
char *parse_hiscoredat(char *s, int n, int *const index);
void hs_init( void );
void hs_update( void );
void hs_close( void );

void computer_writemem_byte(int cpu, int addr, int value);
int computer_readmem_byte(int cpu, int addr);

#endif
