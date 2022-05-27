package hello

/*
#cgo LDFLAGS: -lhello
#include "hello.h"
*/
import "C"

// Say call c function SayHello(const char* s)
func SayHelloGo(s string) {
	C.SayHello(C.CString(s))
}
