inventory_app.exe: main.o indoor.o outdoor.o product.o inventory.o
        g++ main.o indoor.o outdoor.o product.o inventory.o -o inventory_app.exe

main.o: main.cpp indoor.h outdoor.h inventory.h product.h
        g++ -c main.cpp

indoor.o: indoor.cpp indoor.h product.h
        g++ -c indoor.cpp

outdoor.o: outdoor.cpp outdoor.h product.h
        g++ -c outdoor.cpp

product.o: product.cpp product.h
        g++ -c product.cpp

inventory.o: inventory.cpp inventory.h product.h indoor.h outdoor.h
        g++ -c inventory.cpp

clean:
        rm inventory_app.exe main.o indoor.o outdoor.o product.o inventory.o