all:
	clang++ -Wall -Wextra -Werror replace.cpp
	mv a.out replace
	./replace "file.txt" "has" "hes"
	cat file.replace

clean:
	 rm -f replace file.replace

re: clean all
