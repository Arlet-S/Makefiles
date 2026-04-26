CXX = g++
CXXFLAGS = -Wall -O2
APP = julia
TXT = julia_set.txt
PNG = julia_set.png
GP = julia_set.gp
OBJS = main.o

.PHONY: all clean run plot

all: $(APP)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(APP): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(TXT): $(APP)
	./$(APP)

plot: $(TXT) $(GP)
	gnuplot $(GP)

run: $(APP)
	./$(APP)

clean:
	del -f *.o $(APP) $(TXT) $(PNG)