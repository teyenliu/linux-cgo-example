.PHONY: buildhello


buildhello: ## Builds a shared library
	gcc -fPIC -shared -Ihello/include hello/hello.c -o hello/lib/libhello.so