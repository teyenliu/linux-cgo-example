#ifndef HELLO_H__
#define HELLO_H__

#ifdef WINDOWS
   #define API __declspec(dllexport)
#else
    #define API extern
#endif

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

   // Implemented in hello.c (C)
   void SayHello(const char* s);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // HELLO_H__
