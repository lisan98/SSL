
all: test TablasdeConversion 


TablasdeConversion: Conversion.o
	cc TablasdeConversion.c Conversion.o -o TablasdeConversion	

Conversion.o: Conversion.c
	cc -c Conversion.c

ConversionTest: Conversion.o
	cc ConversionTest.c Conversion.o -o ConversionTest

test: ConversionTest
	./ConversionTest

clean:	
	rm rf TablasdeConversion ConversionTest *.o
