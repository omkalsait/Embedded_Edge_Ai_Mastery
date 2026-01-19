shell_env_var=Shell env var, created inside of Make
export shell_env_var
files := a.o b.o c.o all.o
all : 
	echo $$shell_env_var
	echo $(shell_env_var)

all.c :
	echo "int main() { return 0; }" > all.c
%.c : 
	echo "#define $% 10" > $@

clean :
	rm a* b* c* all*
