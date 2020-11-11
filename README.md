Problem:

Es gibt eine überschriebene pure virtual-Klasse ```Base``` mit den abgeleiteten Klassen ```Hello``` und ```Moin```.

Diese definiere ich in ```func.h``` als '''b'''. Zugewiesen, welche ich grade benutzen will, wird über die ```app.cpp```.

Dann rufe ich exec auf, dort wird dann wieder '''b''' aufgerufen und ausgeführt. Je nachdem welche Variante ich gerade in '''b''' hinterlegt habe.

Nun kommt allerdings der Fehler:
```
/usr/bin/ld: call.o:(.bss+0x0): multiple definition of `b'; app.o:(.bss+0x8): first defined here
clang-9.0: error: linker command failed with exit code 1 (use -v to see invocation)
```

Halp pls!

