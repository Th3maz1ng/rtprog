# sysclock

Sysclock driver support for hardware abstraction layer.

This driver manage all clock providers.

## Minimalist code

```C
// init sysclock
sysclock_setClock(120000000); // set clock to 120MHz

uint32_t timer_freq = sysclock_periphFreq();
```

## API

### global clock to set performance
`int sysclock_setClock(uint32_t fosc)` Sets the system clock of the CPU, the system clock may be different of CPU

### peripherical clocks and tree clocks
`uint32_t sysclock_periphFreq(SYSCLOCK_CLOCK busClock)` Gets the actual frequency on a particular peripherical bus clock

`int sysclock_setClockDiv(SYSCLOCK_CLOCK busClock, uint16_t div)` Change the divisor of the busClock given as argumen

### source clock
`int32_t sysclock_sourceFreq(SYSCLOCK_SOURCE source)` Return the actual frequency of the clock source

`int sysclock_setSourceFreq(SYSCLOCK_SOURCE source, uint32_t freq)` Change a frequency of a source if it can be modified

`SYSCLOCK_SOURCE sysclock_source()` Return the actual clock source for system clock

`int sysclock_switchSourceTo(SYSCLOCK_SOURCE source)` Switch the source clock of sysclock to another one and wait for the change effective

## Development status
+ Device assignation, open, basic config and hander call with interrupt works. No test done on counter mode, need more config.

### TODO :
+ Clarify API

## Supported architectures

|Family|Implementation file|Implementation header|
|------|-------------------|---------------------|
|[pic24f](../../../archi/pic24f/README.md)|[sysclock_pic24_dspic33.c](sysclock_pic24_dspic33.c)|[sysclock_pic24_dspic33.h](sysclock_pic24_dspic33.h)|
|[pic24fj](../../../archi/pic24fj/README.md)|[sysclock_pic24_dspic33.c](sysclock_pic24_dspic33.c)|[sysclock_pic24_dspic33.h](sysclock_pic24_dspic33.h)|
|[pic24ep](../../../archi/pic24ep/README.md)|[sysclock_pic24_dspic33.c](sysclock_pic24_dspic33.c)|[sysclock_pic24_dspic33.h](sysclock_pic24_dspic33.h)|
|[pic24hj](../../../archi/pic24hj/README.md)|[sysclock_pic24_dspic33.c](sysclock_pic24_dspic33.c)|[sysclock_pic24_dspic33.h](sysclock_pic24_dspic33.h)|
|[dspic33fj](../../../archi/dspic33fj/README.md)|[sysclock_pic24_dspic33.c](sysclock_pic24_dspic33.c)|[sysclock_pic24_dspic33.h](sysclock_pic24_dspic33.h)|
|[dspic33ep](../../../archi/dspic33ep/README.md)|[sysclock_pic24_dspic33.c](sysclock_pic24_dspic33.c)|[sysclock_pic24_dspic33.h](sysclock_pic24_dspic33.h)|
|[dspic33ev](../../../archi/dspic33ev/README.md)|[sysclock_pic24_dspic33.c](sysclock_pic24_dspic33.c)|[sysclock_pic24_dspic33.h](sysclock_pic24_dspic33.h)|
|[dspic30f](../../../archi/dspic30f/README.md)|[sysclock_dspic30f.c](sysclock_dspic30f.c)|[sysclock_dspic30f.h](sysclock_dspic30f.h)|
|[pic32mm](../../../archi/pic32mm/README.md)|[sysclock_pic32mm.c](sysclock_pic32mm.c)|[sysclock_pic32mm.h](sysclock_pic32mm.h)|
|[pic32mk](../../../archi/pic32mk/README.md)|[sysclock_pic32mz_mk.c](sysclock_pic32.c)|[sysclock_pic32mz_mk.h](sysclock_pic32mz_mk.h)|
|[pic32mx](../../../archi/pic32mx/README.md)|[sysclock_pic32mx.c](sysclock_pic32mx.c)|[sysclock_pic32mx.h](sysclock_pic32mx.h)|
|[pic32mzec](../../../archi/pic32mzec/README.md)|[sysclock_pic32mz_mk.c](sysclock_pic32mz_mk.c)|[sysclock_pic32mz_mk.h](sysclock_pic32mz_mk.h)|
|[pic32mzef](../../../archi/pic32mzef/README.md)|[sysclock_pic32mz_mk.c](sysclock_pic32mz_mk.c)|[sysclock_pic32mz_mk.h](sysclock_pic32mz_mk.h)|
|[pic32mzda](../../../archi/pic32mzda/README.md)|[sysclock_pic32mz_mk.c](sysclock_pic32mz_mk.c)|[sysclock_pic32mz_mk.h](sysclock_pic32mz_mk.h)|
