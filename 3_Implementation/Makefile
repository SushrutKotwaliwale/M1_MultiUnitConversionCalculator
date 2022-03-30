output: Main.o length_covt.o area_covt.o volume_covt.o
	gcc Main.o length_covt.o area_covt.o volume_covt.o -o output

Main.o: Main.c
	gcc -c Main.c
	
length_covt.o: length_covt.c length_covt.h
	gcc -c length_covt.c

area_covt.o: area_covt.c area_covt.h
	gcc -c area_covt.c

volume_covt.o: volume_covt.c volume_covt.h
	gcc -c volume_covt.c

clean:
	rm *.o output.exe