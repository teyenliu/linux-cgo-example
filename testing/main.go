package main

import (
	"github.com/teyenliu/linux-cgo-example/hello-go/hello"
)

func main() {
	hello.SayHelloGo("This is cgo from Go")
}
