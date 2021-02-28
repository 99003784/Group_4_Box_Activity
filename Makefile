PROJECT_NAME = box


SRC = test_box.c\
src/box.c\
unity/unity.c



INC	= -Iinc\
-Iunity

$(PROJECT_NAME).out: $(SRC)
	gcc $^ $(INC) -o $@


all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out 

test: $(PROJECT_NAME).out
	./$(PROJECT_NAME).out

run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

analysis:
	cppcheck $(SRC)

memcheck: $(PROJECT_NAME).out
	valgrind ./$(PROJECT_NAME).out

coverage:${PROJECT_NAME}.out
	gcc -fprofile-arcs -ftest-coverage $(SRC) -I $(INC) -o $(PROJECT_NAME).out
	./${PROJECT_NAME}.out
	gcov -a $(SRC)

codesize:${PROJECT_NAME}.out
	size ./${PROJECT_NAME}.out

clean:
		rm -rf *.out *.o documentation/html *.gcov *.gcda *.gcno

(BUILD):
	mkdir build