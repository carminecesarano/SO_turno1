start: main.c monitor_conti.c monitor_conti.h
	gcc -o start main.c monitor_conti.c -pthread

zip: main.c monitor_conti.c monitor_conti.h
	zip SO_compito.zip main.c monitor_conti.c

clean:
	rm -f start
