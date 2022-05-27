.PHONY: buildtesting


buildtesting: ## Builds a go testing app
	mkdir -p 3rd/include
	mkdir -p 3rd/lib
	cp ../hello/include/* 3rd/include
	cp ../hello/lib/* 3rd/lib
	CGO_CFLAGS="-g -O2 -I /home/liudanny/SourceCode/linux-cgo-example/testing/3rd/include" CGO_LDFLAGS="-g -O2 -L /home/liudanny/SourceCode/linux-cgo-example/testing/3rd/lib -Wl,-rpath=./3rd/lib" go build
