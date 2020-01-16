# makefile formatif APP 3, compilation separee..
# formatif pratique APP 3 
# GEGI UdS
#
# But principal:
#   animaux2 construire le programme animaux2
#
# But secondaires:
#  clean
#
#
#
animaux2:  animaux2.o  anim2.o 
	g++ -o animaux2 animaux2.o anim2.o
#
animaux2.o: animaux2.cpp anim2.h
	g++ animaux2.cpp -g -c
#
anim2.o: anim2.cpp anim2.h
	g++ anim2.cpp -g -c
#
clean:
	rm  -f *.o		
#
# fin du makefile
#
