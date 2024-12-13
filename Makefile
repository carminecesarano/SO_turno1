start: main.c monitor_conti.c monitor_conti.h
	gcc -o start main.c monitor_conti.c -pthread

clean:
	rm -f start