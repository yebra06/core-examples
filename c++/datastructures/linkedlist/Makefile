SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:.cpp=.o)

all: app
app: $(OBJS)
	g++ -std=c++11 -Wall -o $@ $^
%.o: %.cpp
	g++ -c -std=c++11 -Wall $< -o $@
clean:
	rm $(OBJS) app
